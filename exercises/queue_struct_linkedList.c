#include <stdio.h>
#include <stdlib.h>
struct queue {
  int el;
  struct queue *link;
};
typedef struct queue queue;
void add(queue **rear, queue **front, int el) {
  queue *pt;
  queue *last = *rear;
  pt = (queue *)malloc(sizeof(queue));
  pt->el = el;
  pt->link = NULL;

  if (*front == NULL) {
    *rear = pt;
    *front = pt;
  } else {
    // pt->link = *rear;
    last->link = pt;
    *rear = pt;
  }
}
int rm_el_queue(queue **front, queue **rear) {
  queue *pt;
  pt = *front;
  if (*front == NULL) {
    printf("UnderFlow\n\n");
    return NULL;
  } else if (*front == *rear) {
    int el = pt->el;
    *front = *rear = NULL;
    free(pt);
    return el;
  }
  int el = pt->el;
  *front = pt->link;
  free(pt);
  return el;
}
int main() {
  queue *front, *rear;
  front = rear = NULL;
  int ch = 1;
  while (ch) {
    printf("Enter 1 to add element.\nEnter 2 to remove an element\nEnter 0 to "
           "exit\nYour choice: ");
    fflush(stdout);
    scanf("%d", &ch);
    switch (ch) {
    case 1: {
      printf("Enter a number to add to the stack: ");
      fflush(stdout);
      int n;
      scanf("%d", &n);
      add(&rear, &front, n);
      break;
    }
    case 2: {
      int a = rm_el_queue(&front, &rear);
      if (a != NULL) {
        printf("%d popped\n", a);
      }
      break;
    }
    }
  }
  return 0;
}
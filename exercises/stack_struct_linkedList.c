#include <bits/types/stack_t.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int el;
  struct node *link;
};
typedef struct node stack;
void push(stack **s, int el) {
  stack *st;
  st = (stack *)(malloc(sizeof(stack)));
  st->el = el;
  st->link = *s;
  *s = st;
}
int pop(stack **s) {
  if (*s == NULL) {
    printf("Stack is empty.\nUnderflow.\n");
    return NULL;
  } else {
    stack *pt = *s;
    int poppedEl = pt->el;
    *s = pt->link;
    free(pt);
    return poppedEl;
  }
}
int main() {
  stack *Top;
  Top = NULL;
  int ch = 1;
  while (ch) {
    printf("Enter 1 to add element.\nEnter 2 to pop an element\nEnter 0 to "
           "exit\nYour choice: ");
    fflush(stdout);
    scanf("%d", &ch);
    switch (ch) {
    case 1: {
      printf("Enter a number to add to the stack: ");
      fflush(stdout);
      int n;
      scanf("%d", &n);
      push(&Top, n);
      break;
    }
    case 2: {
      int a = pop(&Top);
      if (a != NULL) {
        printf("%d popped\n", a);
      }
      break;
    }
    }
  }
  return 0;
}
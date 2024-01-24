#include <stdio.h>
#include <stdlib.h>
struct node {
  int num;
  struct node *next;
};
typedef struct node node_t;
void print_linked_list(node_t *head) {
  if (head == NULL)
    return;
  printf("%d-", head->num);
  print_linked_list(head->next);
}
void push(node_t **head, int num) {
  node_t *temp = malloc(sizeof(node_t));
  temp->num = num;
  temp->next = *head;
  *head = temp;
}
int nth_el_from_last_linked_list(node_t *head, int N) {
  static int i = 0;
  if (head == NULL)
    return NULL;
  int varToReturn = nth_el_from_last_linked_list(head->next, N);
  if (varToReturn == NULL)
    if (++i == N)
      return head->num;
    else
      return NULL;
  else
    return varToReturn;
}
int main() {
  node_t *head = NULL;
  push(&head, 1);
  push(&head, 0);
  push(&head, 2);
  push(&head, 3);
  push(&head, 4);
  push(&head, 5);
  push(&head, 6);
  push(&head, 7);
  push(&head, 8);
  push(&head, 0);
  push(&head, 9);
  printf("Members of linked list: ");
  fflush(stdout);
  print_linked_list(head);
  printf("\n");
  printf("4th element from last: %d\n", nth_el_from_last_linked_list(head, 4));
  return 0;
}
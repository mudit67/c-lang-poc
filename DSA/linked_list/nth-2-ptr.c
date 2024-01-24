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
  node_t *ref_ptr, *main_ptr;
  ref_ptr = main_ptr = head;
  for (int i = 0; i < N; i++) {
    ref_ptr = ref_ptr->next;
  }
  while (ref_ptr != NULL) {
    ref_ptr = ref_ptr->next;
    main_ptr = main_ptr->next;
  }
  return main_ptr->num;
};
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
  int nth = 2;
  printf("%dth element from last: %d\n", nth,
         nth_el_from_last_linked_list(head, nth));
  return 0;
}
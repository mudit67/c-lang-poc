#include <stdio.h>
#include <stdlib.h>
/*
# Internet Aproach
   struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;

    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("The middle element is [ %d ]\n\n", slow_ptr->data);
    }
*/
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
node_t *middleEl(node_t *head) {
  int len = 0;
  node_t *ref = head, *main = head, *node_to_ret = malloc(sizeof(node_t));
  while (ref->next != NULL) {
    ref = ref->next;
    if (++len % 2 == 0)
      main = main->next;
  }
  if ((len + 1) % 2 == 0) {
    node_to_ret->num = main->next->num;
    node_to_ret->next = NULL;
    node_t *temp = malloc(sizeof(node_t));
    temp->next = node_to_ret;
    temp->num = main->num;
    node_to_ret = temp;
  } else {
    node_to_ret->next = NULL;
    node_to_ret->num = main->num;
  }
  return node_to_ret;
}
int main() {
  int len = 7;
  node_t *head = NULL;
  for (int i = 0; i < len; i++) {
    push(&head, len - i);
  }
  printf("Intial Linked List: ");
  fflush(stdout);
  print_linked_list(head);
  printf("\n");
  printf("Middle of the Linked List: \n");
  print_linked_list(middleEl(head));
  printf("\n");
  return 0;
}
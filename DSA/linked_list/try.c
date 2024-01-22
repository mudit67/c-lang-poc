#include <iso646.h>
#include <stdio.h>
#include <stdlib.h>
struct node {
  int value;
  struct node *next;
};
typedef struct node node_t;
void print_linked_list(node_t *head) {
  printf("Linked List: %d", head->value);
  head = head->next;
  while (head != NULL) {
    printf(", %d", head->value);
    head = head->next;
  }
}
node_t *node_create(int val) {
  node_t *temp = malloc(sizeof(node_t));
  temp->value = val;
  return temp;
}
void insert_at_head(node_t **head, node_t *node_to_insert) {
  node_to_insert->next = *head;
  *head = node_to_insert;
}
node_t *node_search(node_t *head, int value_to_look) {
  node_t *temp = head;
  while (temp != NULL) {
    if (temp->value == value_to_look)
      return temp;
    temp = temp->next;
  }
  return NULL;
}
void node_insert_after_node(node_t *node_to_insert,
                            node_t *node_to_insert_after) {
  node_to_insert->next = node_to_insert_after->next;
  node_to_insert_after->next = node_to_insert;
}
void node_remove(node_t *head, node_t *node_to_remove) {
  node_t *prevNode = head;
  while (prevNode->next != node_to_remove && prevNode != NULL) {
    prevNode = prevNode->next;
  }
  prevNode->next = node_to_remove->next;
  free(node_to_remove);
}
int main() {

  node_t *head = NULL;
  node_t *temp;

  printf("Inserting Items in Linked List\n");
  fflush(stdout);

  for (int i = 0; i < 10; i++) {
    temp = node_create(10 - i);
    insert_at_head(&head, temp);
  }

  printf("Items inserted in linked list\n");
  fflush(stdout);

  node_t *node_found = node_search(head, 7);
  printf("Node found with value: %d\n", node_found->value);
  fflush(stdout);

  printf("Inserting 70 after 7\n");
  fflush(stdout);
  temp = node_create(70);
  node_insert_after_node(temp, node_found);
  printf("New node inserted\n");
  fflush(stdout);

  printf("Removing Node 5 from the list\n");
  fflush(stdout);
	
	node_t *node_with_5 = node_search(head, 5);
	node_remove(head, node_with_5);
	
	printf("Node Removed\n");
	fflush(stdout);


  print_linked_list(head);

  printf("\n");
  return 0;
}
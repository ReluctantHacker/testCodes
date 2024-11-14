// This is a instance of linked list
#include <stdio.h>
#include <stdlib.h>

// define linked list
typedef struct Node {
	int data;
	Node *next;
}

// insert data to linked list's head
void insertAtBeginning(Node **head_ref, int new_data) {
	Node *new_node = (Node *)malloc(sizeof(Node));
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

// print all the element in linked list
void printList(Node *node) {
	while (node != NULL) {
		printf("%d", node->data);
		node = node->next;
	}
	printf("\n");
}


int main() {
	// initialization 
	Node *head = NULL;

	// insert some data in linked list
	insert(&head, 1);
	insert(&head, 2);
}

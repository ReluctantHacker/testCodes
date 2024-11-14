// this is a test for linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} Node;


void insertHeadNode(Node **head, int new_data) {
	// create new head pointer
	Node *new_head = (Node *)malloc(sizeof(Node));
	new_head->data = new_data;
	new_head->next = *head;
	*head = new_head;
}

void printList(Node *node) {
	while (node != NULL) {
		printf("%d\n", node->data);
		node = node->next;
	}
}


int main() {
	// initiailize a head node
	Node *head = NULL; // head literally represents the node itself

	// insert new head
	insertHeadNode(&head, 1);
	insertHeadNode(&head, 2);
	insertHeadNode(&head, 3);

	// show the linked list
	printList(head);

}



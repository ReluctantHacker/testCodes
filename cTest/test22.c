#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define EMPTY (-1)
#define INT_MIN (-2147483648)
#define STACK_EMPTY INT_MIN

typedef struct node{
    int value;
    struct node *next;
} node;


bool push(node **head, int value){
    node *newnode = malloc(sizeof(node));
    newnode->value = value;
    newnode->next = (*head);
    (*head) = newnode;
    return true;
}

int pop(node **head){
    if((*head) == NULL)
        return STACK_EMPTY;

    int result = (*head)->value;
    node *temp = (*head);
    (*head) = (*head)->next;
    free(temp);
    return result;
}

int showStack(node **head) {
	node **current_node= head;
	while ((*current_node) != NULL) {
		printf("%d\n", (*current_node)->value);
		(*current_node) = (*current_node)->next;
	}
}

int main(){

    node *head1 = NULL;
    node *head2 = NULL;
    node *head3 = NULL;

    push(&head1, 56);
    push(&head1, 13);
    push(&head1, 12);
//    showStack(&head1);
    int result = pop(&head1);
    printf("show result: %d\n", result);
//    showStack(&head1);

//    push(&head2, 17);
//    push(&head2, 19);
//    push(&head2, 28);
//
//    push(&head3, 26);
//    push(&head3, 24);
//    push(&head3, 32);

//    int t;
//    while((t=pop(&head2))!=STACK_EMPTY){
//        printf("t = %d\n", t);
//    }
    return 0;
}

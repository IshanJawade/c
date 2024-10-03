// Basic Linked List Structure and Creation

# include <stdio.h>
# include <stdlib.h>

typedef struct Node{
	int x;
	struct Node *link;
} Node;

int main(){
	Node* current = NULL;

	// first node
	Node* head = NULL;
	head = (Node*) malloc(sizeof(Node));
	head->x=12;
	head->link = NULL;
	current = head;

	// second node
	Node* node2 = NULL;
	node2 = (Node*) malloc(sizeof(Node));
	node2->x = 24;
	node2->link = NULL;
	head->link = node2;

	// printing linked list
	printf("Head->value: %d Head->link %p\n", head->x, head->link);
	printf("Node2->value: %d Node2->link %p\n", node2->x, node2->link);
	free(head);
	free(node2);
	return 0;
}
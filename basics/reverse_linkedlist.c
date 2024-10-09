# include <stdio.h>
# include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *link;
} Node;

Node *create_node(int x){
	Node *new_node = (Node *) malloc (sizeof(int));
	new_node->data = x;
	new_node->link = NULL;
	return new_node;
}

void print_list(Node *head){
	Node *current = head;
	while (current != 0){
		printf("%d ", current->data);
		current = current->link;
	}
	printf("\n");
}

Node *reverse(Node *head){
	Node *prev = NULL;
	Node *current = head;
	Node *next = NULL;

	while(current != NULL) {
		next = current->link;
		current->link = prev;
		prev = current;
		current = next;
	}
	return prev;
}

int main() {
	Node *n1 = create_node(10);
	Node *n2 = create_node(20);
	Node *n3 = create_node(30);
	Node *n4 = create_node(40);

	n1->link = n2;
	n2->link = n3;
	n3->link = n4;

	Node *head = n1;

	printf("Original Linked List: \n");
	print_list(head);

	head = reverse(head);
	printf("Reversed Linked List: \n");
	print_list(head);

    return 0;
}



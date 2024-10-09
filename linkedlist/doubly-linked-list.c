# include <stdio.h>
# include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* prev;
	struct Node* next;
}Node;

Node* create_node(int);
void traverse(Node*);
void reverse(Node*);

int main(){
	Node* head = create_node(17);
	head->prev = NULL;

	Node* second = create_node(34);
	head->next = second;
	second->prev = head;

	Node* third = create_node(51);
	second->next = third;
	third->prev = second;

	Node* fourth = create_node(68);
	third->next = fourth;
	fourth->prev = third;

	Node* fifth = create_node(85);
	fourth->next = fifth;
	fifth->prev = fourth;
	fifth->next = NULL;

	traverse(head);

	reverse(fifth);

	free(head);
	free(second);
	free(third);
	free(fourth);
	free(fifth);

	return 0;
}

Node* create_node(int data){
	Node* new_node = (Node *) malloc(sizeof(Node));
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = NULL;
	return new_node;
}

void traverse(Node* head){
	Node* current = head;
	while(current != NULL){
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("NULL\n");
}

void reverse(Node* last){
	Node* current = last;
	while(current != NULL){
		printf("%d -> ", current->data);
		current = current->prev;
	}
	printf("NULL\n");
}
# include <stdio.h>
# include <stdlib.h>

typedef struct Node{
	int x;
	struct Node* next;
}Node;

Node* create_node(int);
void traverse_nodes(Node*);


int main(){
	Node* head = create_node(15);
	Node* second = create_node(30);
	Node* third = create_node(45);

	head->next=second;
	second->next = third;
	third->next=NULL;
	
	traverse_nodes(head);

	free(head);
	free(second);
	free(third);

	return 0;
}

Node* create_node(int num){
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->x = num;
	new_node->next = NULL;
	return new_node;
}

void traverse_nodes(Node* head){
	Node* current = head;
	while(current != NULL){
		printf("%d -> ", current->x);
		current = current->next;
	}
	printf("NULL\n");
}
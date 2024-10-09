# include <stdio.h>
# include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *link;
} Node;

Node *create_node(int x){
	Node *new_node = (Node *) malloc (sizeof(Node));
    if(new_node == NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }
	new_node->data = x;
	new_node->link = NULL;
	return new_node;
}

Node* create_linkedlist(int n){
	int size = n;
	Node *prev = NULL;
	Node *current = NULL;
	while(size != 0){
		current = create_node(size);
		current->link = prev;
		prev = current;
		size--;
	}
	printf("%d Nodes created!\n", n);
	return current;
}

void print_list(Node *head){
	Node *current = head;
	while (current != 0){
		printf("%d -> ", current->data);
		current = current->link;
	}
	printf("NULL \n");
}

void memory_cleaner(Node* head){
	Node *current = head;
	Node *next = NULL;
	int counter = 0;
	while(current != NULL){
		next  = current->link;
		free(current);
		current = next;
		counter++;
	}
	printf("%d Nodes cleaned from the memory! \n", counter);
}

int main() {
	// system("clear");
	Node *head = create_linkedlist(20);

	printf("Linked List: \n");
	print_list(head);

    printf("Press any to free the memory ...");
    getchar();

	memory_cleaner(head);
    head = NULL;    // dangling pointer addressed

    return 0;
}

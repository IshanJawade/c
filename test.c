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

Node* create_linkedlist(int n) {
    int size = 1;
    Node *head = NULL; // This will be the head of the linked list
    Node *prev = NULL; // To keep track of the last node

    while (size <= n) { // Loop until size is less than n
        Node *current = create_node(size); // Create a new node
        if (head == NULL) {
            head = current; // Set head to the first node
        } else {
            prev->link = current; // Link the previous node to the current one
        }
        prev = current; // Update prev to the current node
        size++;
    }

    printf("%d Nodes created!\n", n);
    return head; // Return the head of the linked list
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
	Node *head = create_linkedlist(5);

	printf("Linked List: \n");
	print_list(head);

    printf("Press any to free the memory ...");
    getchar();

	memory_cleaner(head);
    head = NULL;    // dangling pointer addressed

    return 0;
}

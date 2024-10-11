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

void memory_cleaner(Node *head){
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

// add nodes

Node *add_head(int x, Node *head){
    Node *new_node = create_node(x);
    new_node->link = head;
    head = new_node;
    return head;
}

void add_tail(int x, Node *head){
    Node *new_node = create_node(x); 
    Node *current = head;
    Node *prev_curr = NULL;
    while(current != NULL){
        prev_curr = current;
        current = current->link;
        if(current == NULL){
            prev_curr->link = new_node;
        }
    }

}

Node *add_in(int x, int p, Node* head){
	Node *new_node = create_node(x); 
    Node *current = head;
	Node *prev_curr = NULL;
	int counter=1;
	if(p == 1){
		return add_head(x, head); // returning new head from the add_head()
	}
    while(current != NULL){
        if(counter == p){
            prev_curr->link = new_node;
			new_node->link = current;
			break; 
        }
		prev_curr = current;
        current = current->link;
		counter++;
		// if user wanted to add at the end
		if(current == NULL){		
            add_tail(x, head);
        }
    }
	return head;
}


int main() {
	// system("clear");
	Node *head = create_linkedlist(5);

	printf("Linked List: \n");
	print_list(head);

    //added new node at head
    head = add_head(0, head);
    printf("Added new node before head \n");
    print_list(head);

    getchar();

    // added new node at tail
    add_tail(6, head);
    printf("New tail added \n");
    print_list(head);

	getchar();

	// added new node in between
	head = add_in(100, 1, head);
	printf("New node added in between \n");
	print_list(head);

    getchar();
    printf("Press any to free the memory ...");

	memory_cleaner(head);
    head = NULL;    // dangling pointer addressed

    return 0;
}

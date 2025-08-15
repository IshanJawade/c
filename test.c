# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

Node *createNode(int n);
void printLinkedList(Node *n1);
void freeMem(Node *n1);

int main() {
    Node *n1 = createNode(1);
    Node *n2 = createNode(2);
    Node *n3 = createNode(3);
    Node *n4 = createNode(4);
    Node *n5 = createNode(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    // n5->next = NULL; // no nned for this line 

    printLinkedList(n1);
    freeMem(n1);

    return 0;
}

Node *createNode(int n){
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Memory allocation failed!");
        exit(1);
    }
    new_node->val = n;
    new_node->next = NULL;
    return new_node;
}

void printLinkedList(Node *n1){
    Node *cur = n1;
    while(cur != NULL){
        printf("%d ", cur->val);
        cur = cur->next;
    }
    printf("\n");
}

void freeMem(Node *n1){
    Node *cur = n1;
    Node *next = NULL;
    while(cur != NULL){
        next = cur->next;
        free(cur);
        cur = next;
    }
    printf("All the nodes are deleted successfully");
}
# include <stdio.h>
# include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* left;
	struct Node* right;
} Node;

Node* create_node(int x){
	Node* new_node = (Node *) malloc(sizeof(Node));
	new_node->data = x;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}
// left -> root -> right
void in_order_traversal(Node* root){
	Node* current = root;
	if(current == NULL){
		return;
	}
	in_order_traversal(current->left);
	printf("%d ", current->data);
	in_order_traversal(current->right);
}
// root -> left -> right 
void pre_order_traversal(Node* root){
	Node* current = root;
	if(current == NULL){
		return;
	}
	printf("%d ", current->data);
	in_order_traversal(current->left);
	in_order_traversal(current->right);
}
// left -> right -> root 
void post_order_traversal(Node* root){
	Node* current = root;
	if(current == NULL){
		return;
	}
	in_order_traversal(current->left);
	in_order_traversal(current->right);
	printf("%d ", current->data);
}


int main(){
	Node* n1 = create_node(1); // leaf
	Node* n2 = create_node(2); // internal
	Node* n3 = create_node(3); // leaf
	Node* n4 = create_node(4); // root
	Node* n5 = create_node(5); // leaf
	Node* n6 = create_node(6); // internal
	Node* n7 = create_node(7); // leaf

	n4->left = n2;
	n4->right = n6;
	n2->left = n1;
	n2->right = n3;
	n6->left = n5;
	n6->right = n7;

	printf("Pre-Order Traversal\n");
	pre_order_traversal(n4);
	printf("\n");

	printf("In-Order Traversal\n");
	in_order_traversal(n4);
	printf("\n");

	printf("Post-Order Traversal\n");
	post_order_traversal(n4);
	printf("\n");

	return 0;
}
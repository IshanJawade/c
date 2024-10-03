# include <stdio.h>
# include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* left;
	struct Node* right;
}Node;

Node* create_node(int);
void print_tree(Node *);
void print_tree_rec(Node *, int level);
void print_tabs(int numtabs);

int main(){
	Node* n1 = create_node(11);
	Node* n2 = create_node(12);
	Node* n3 = create_node(13);
	Node* n4 = create_node(14);
	Node* n5 = create_node(15);
	Node* n6 = create_node(16);
	Node* n7 = create_node(17);
	Node* n8 = create_node(18);
	Node* n9 = create_node(19);
	Node* n10 = create_node(20);

	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	n3->left = n6;
	n3->right = n7;
	n5->left = n8;
	n5->right = n9;
	n7->right = n10;

	print_tree(n1);

	free(n1);
	free(n2);
	free(n3);
	free(n4);
	free(n5);
	free(n6);
	free(n7);
	free(n8);
	free(n9);
	free(n10);

	return 0;
}

Node* create_node(int x){
	Node* new_node = (Node *) malloc(sizeof(Node));
	if(new_node != NULL){
		new_node->data = x;
		new_node->left = NULL;
		new_node->right = NULL;
	}else{
		exit(1);
	}
	return new_node;
}

void print_tree(Node* root){
	print_tree_rec(root, 0);
}

void print_tree_rec(Node *root, int level){
	if(root == NULL){
		print_tabs(level);
		printf("---<empty>---\n");
		return;
	}
	print_tabs(level);
	printf("Value: %d\n", root->data);
	print_tabs(level);

	printf("Left\n");
	print_tree_rec(root->left, level+1);
	print_tabs(level);

	printf("Right\n");
	print_tree_rec(root->right, level+1);
	print_tabs(level);
	printf("done\n");
}

void print_tabs(int numtabs){
	for(int a=0; a<numtabs; a++){
		printf("\t");
	}
}

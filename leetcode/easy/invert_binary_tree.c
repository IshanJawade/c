# include <stdio.h>
# include <stdlib.h>

typedef struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
} TreeNode;

void print_tree(TreeNode *root){
	if(root == NULL){
		return;
	}
	printf("%d ",root->val);
	
	print_tree(root->left);
	print_tree(root->right);
}

TreeNode *invert_binary_tree(TreeNode *root){
	if(root == NULL){
		return NULL;
	}

	TreeNode *tmp = root->left;
	root->left = root->right;
	root->right = tmp;

	invert_binary_tree(root->left);
	invert_binary_tree(root->right);

	return root;
}

TreeNode *create_node(int n){
	TreeNode *new_node = malloc (sizeof(TreeNode));
	new_node->val = n;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

TreeNode *create_tree(){

	TreeNode* n1 = create_node(1); // leaf
	TreeNode* n2 = create_node(2); // internal
	TreeNode* n3 = create_node(3); // leaf
	TreeNode* n4 = create_node(4); // root
	TreeNode* n5 = create_node(5); // leaf
	TreeNode* n6 = create_node(6); // internal
	TreeNode* n7 = create_node(7); // leaf

	n4->left = n2;
	n4->right = n6;
	n2->left = n1;
	n2->right = n3;
	n6->left = n5;
	n6->right = n7;

	return n4;
}

int main(){

	TreeNode *root = create_tree();

	print_tree(root);
	printf("\n");

	root = invert_binary_tree(root);

	print_tree(root);
	printf("\n");

	return 0 ;
}
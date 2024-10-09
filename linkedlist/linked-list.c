# include <stdio.h>

typedef struct Node{
	int x ;
	struct Node* next; 		// just a pointer variable of type Node
} Node;

int main(){
	Node root, ele2, ele3;
	root.x = 1;
	root.next = &ele2;
	printf("%p %d %p \n", &root , root.x, root.next);

	ele2.x = 2;
	ele2.next = &ele3;
	printf("%p %d %p \n", &ele2, ele2.x, ele2.next);

	ele3.x = 3;
	ele3.next = NULL;
	printf("%p %d %p \n", &ele3 ,ele3.x, ele3.next);
	
	return 0;
}
# include <stdio.h>

int main(){
	int num = 8;
	int* ptr1 = &num;
	int** ptr2 = &ptr1;

	printf("Memory Address of num: %p Contents of num: %d\n", &num, num);
	printf("Memory Address of ptr1: %p Contents of ptr1: %p Dereferencing ptr1: %d\n", &ptr1, ptr1, *ptr1);
	printf("Memory Address of ptr2: %p Contents of ptr2: %p Dereferencing ptr1: %p\n", &ptr2, ptr2, *ptr2);
	printf("Dereferencing ptr2 2 times: %d\n", **ptr2);
	return 0;
}
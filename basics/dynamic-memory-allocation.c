# include <stdio.h>
# include <stdlib.h>		// header file contains malloc function

int main(){
	int size = 4;
	int* ptr = (int *)malloc(size * sizeof(int));
	/*
	  syntax: (void *) malloc (unsigned integer);
	  if memory is not available malloc will return a NULL pointer
	*/

	for(int a=0; a<size; a++){
		printf("Enter the integer: ");
		scanf("%d", ptr+a);
	}
	
	for(int a=0; a<size; a++){
		printf("%d ", *(ptr+a));
	}

	return 0;
}
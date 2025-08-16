# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>


int main(){
	int a = 20;
	int *ptr = &a;
	int **dptr = &ptr;

	printf(" a		%d\n", a);		// contents variable a
	printf(" &a		%p\n", &a);		// Memory address a
	printf(" ptr 	%p\n", ptr);	// contents of ptr which is "memory address of a" = &a
	printf(" &ptr	%p\n", &ptr);	// Memory address of ptr 
	printf(" *ptr	%d\n", *ptr);	// dereferencing ptr gives conntents of a which is 20
	printf(" dptr	%p\n", dptr);	// contents address of dptr which is memory address of ptr
	printf(" &dptr	%p\n", &dptr);	// Memory address of dptr

	// dereferencing double pointer
	printf(" *dptr	%p\n", *dptr);	// Dereferencing dptr once gives us contents of ptr which is &a
	printf(" **dptr %d\n", **dptr);	// Dereferencing dptr twice gives us contents of a 

	return 0;
}
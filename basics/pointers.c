# include <stdio.h>

int main(){
	int num = 24;
	printf("%p\n", &num); // memory location of num variable

	int* num_ptr = &num;	// pointer variable that stores address info of a variable
	printf("%p\n", num_ptr);

	int myAge = 43;     // Variable declaration
	int* ptr = &myAge;  // Pointer declaration

	// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
	printf("Reference %p\n", ptr);

	// Dereference: Output the value of myAge with the pointer (43)
	printf("Dereference %d\n", *ptr);

	/*
	Note:
	Note that the * sign can be confusing here, as it does two different things in our code:

	- When used in declaration (int* ptr), it creates a pointer variable.
	- When not used in declaration, it act as a dereference operator.
	*/

	// Pointer and Arrays

	int numbers[5] = {10,20,30,40,50};

	printf("%d\n", numbers);
	printf("%p\n", numbers);	 // address of numbers array
	printf("%p\n", &numbers[0]); // address of first element of the array

	printf("%d\n", *numbers);		// pointer to the first element of the array
	printf("%d\n", *(numbers+1) ); 	// pointer to the second element

	// Iterate through the array with pointers
	for (int a=0; a<5; a++){
		printf("%d\n", *(numbers+a));
	}

	return 0;
}
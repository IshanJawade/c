# include <stdio.h>

// these fucntions are pass by value so they wont actually affect on
// the original variables 
void temp_swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	printf("Swap using temp variable: \n");
	printf("a= %d b= %d \n", a,b);
}
void xor_swap(int a, int b){
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Swap using Arithmatic XOR: \n");
	printf("a= %d b= %d \n", a,b);
}
void xor_bitwise_swap(int a, int b){
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("Swap using bitwise XOR: \n");
	printf("a= %d b= %d \n", a,b);
}

/* this fucntion takes pass by refference to the actual variables
this function affects the actual variable
In this fastion you can use any method used in above functions 
Currently, this fuction uses temp method to swap values 
*/
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main(){

	int a = 24, b= 74; 
	printf("a= %d b= %d \n", a,b);

	temp_swap(a,b);
	xor_swap(a,b);
	xor_bitwise_swap(a,b);
	swap(&a, &b);
	printf("From Main Function: \na= %d b= %d \n", a,b);
	return 0;
}
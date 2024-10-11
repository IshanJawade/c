# include <stdio.h>

void pass_by_value(int a){
	a = 20;
	printf("a in function: %d \n", a);
}

void pass_by_reference(int *a){
	*a = 20;
	printf("a in function: %d \n", *a);
}

int main(){
	int a = 10;
	pass_by_value(a);
	printf("after pass by value, a in main(): %d \n", a);
	pass_by_reference(&a);
	printf("after pass by reference, a in main(): %d \n", a);
	return 0;
}

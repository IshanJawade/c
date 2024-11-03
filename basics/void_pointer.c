# include <stdio.h>

int main(){
	void *ptr; // void pointers can be assign to any datatypes 
	int num = 45;
	ptr = &num;
	// first cast ptr into specific datatype pointer then dereference it
	printf("%d \n", *(int*)ptr );
	return 0;
}
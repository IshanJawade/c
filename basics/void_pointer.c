# include <stdio.h>

int main(){
	void *ptr; // void pointers can be assign to any datatypes 
	int num = 45;
	char c = 'b';
	ptr = &c;
	// first cast ptr into specific datatype pointer then dereference it
	printf("%c \n", *(char *)ptr );
	return 0;
}
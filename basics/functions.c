# include <stdio.h>

// declaration
void function();		
void functionTwo();	

int main() {
	functionTwo();
	return 0;
}

// Definition
void functionTwo(){
	function();
	printf("Text from functionTwo.\n");
}

void function(){
	printf("Text from fucntion1.\n");
}

/*
	Without declation function will not work if it has been called before.
	A fucntion has to be declared or defined before its been called.
*/
# include <stdio.h>
# include <string.h>

struct myStruct{	// struct declaration
	int num;		// member1
	char myletter;	// member2 
	char string[20];// member3
}; // end of the struct should be a semicolon

/*	Note:
	You cannot initialize the struct members in the struct, only
	declaration is allowed. Initialization can be done in main function
*/

int main(){

	struct myStruct s1;
	s1.num = 34;
	s1.myletter = 'r';
	printf("%d %c", s1.num, s1.myletter);

	// other way of initializing struct
	struct myStruct s2 = {24, 'a', "Hello World"};
	printf("%d %c %s \n", s2.num, s2.myletter, s2.string);

	// Initialized only string by strcpy fucntion
	strcpy(s2.string, "Modified String");
	printf("%s \n", s2.string);


	return 0;
}
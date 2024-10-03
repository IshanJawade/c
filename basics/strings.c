# include <stdio.h>
# include <string.h>	// header file with some string fucntions

int main(){
	
	char string[]="Hello World";

	printf("%s\n", string);
	printf("Size of the String in bytes: %d\n", sizeof(string));
	// size = actual memory allocation in bytes

	char name[40] = "Ishan Jawade";
	printf("Length of teh string: %d\nSize of the string: %d\n",strlen(name), sizeof(name));

	// length of the string with null terminator "\0" every string has this by default
	int length_of_string = sizeof(string)/sizeof(string[0]); 
	printf("Length of the string with null character: %d\n", length_of_string);
	printf("%c\n", string[0]);

	printf("Length of teh string without null: %d\n", strlen(string)); // actual length of the string without "/0" null terminator

	// Alter the element in the string
	string[5] = '_';
	printf("%s\n", string);

	// String concatination
	char str1[20] = "Hello";
	char str2[] = "World";

	strcat(str1, str2); // concatinate str1, str2 and stored in str1

	// Copy Strings
	char str3[20] = "Hello World!";
	char str4[20];
	// Copy str3 to str4
	strcpy(str4, str3);
	printf("%s\n", str4);

	return 0;
}
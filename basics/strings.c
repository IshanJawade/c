# include <stdio.h>
# include <string.h>	// header file with some string fucntions

int main(){
	
	// String is a character array in C 
	char name0[] = {'i','s','h','a','n','\0'}; 
	// last '\0' is a null character that tells compiler to stop reading for the string  
	printf("%s \n", name0);


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
	
	strcpy(str4, str3); 	// Copy str3 to str4
	printf("%s\n", str4);

	// Convert Int to String
	int num = 123456;
	char str_num[8];

	sprintf(str_num, "%d",  num); // int to string
	printf("%s\n", str_num);

	//string to int
	int sample;
	sscanf(str_num, "%d", &sample);	//strinf to int
	printf("%d\n",sample);

	return 0;
}
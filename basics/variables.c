# include <stdio.h>
# include <stdbool.h> // need this Hfile to use bool (boolean) datatype

void main(){
	int age = 24;

	float cgpa = 8.8; // decimal point 4 bytes (6-7 digits) 32 bits of precision
	double gpa = 3.7; // decimal point 8 bytes (15-16 digits) 64 bits of precision
 	char grade = 'A';
	char name[] = "Ishan"; 

	int num; // declaration
	num = 34; // initialization

	// C doesnrt have String datatype because String is an object

	printf("Your name is %s \n", name);  			// %d is a format spacifier for char array
	printf("You are %d years old \n", age);			// %d is a format spacifier for integers
	printf("Your average grades are %c \n", grade);	// %c is a format spacifier for charactors
	printf("Your avarage CGPA is %f \n", cgpa);		// %f is a format spacifier for float

	// Multiple variavble initialization
	int a,b,c,d;
	a = b = c = d = 50;
	printf("%i\n", a+b+c+d); // instead of %d %i works the same but not widely used

	// characters in decimal
	printf("%d\n", grade); // ASCII value of char 'A' = 65
	printf("%c\n", grade); // prints 'A'

	//  Size of every datatype
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	printf("int %lu\n", sizeof(myInt));
	printf("float %lu\n", sizeof(myFloat));
	printf("double %lu\n", sizeof(myDouble));
	printf("char %lu\n", sizeof(myChar));

	const int CONST = 4545; // Can't change this value during execution of the program

	bool flag = false; // true = 1 , false = 0
	printf("%d\n", flag);
}
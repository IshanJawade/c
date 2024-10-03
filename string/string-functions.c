# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main(){
	char string1[] = "Content From String1";
	char string2[] = "Content From String2";

	// strlwr(string1);				// converts to lower case
	// strupr(string1);					// converts to upper case
	strcat(string1, string2); 		// concatinates two strings and stored in string 1
	// strcpy(string1, string2);		// copies string 2 into string 1
	// strncpy(string1, string2, n);	// copies nth character of string2 to string1

	printf("%s", string1);
	return 0;
}		
# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main(){
	char string1[] = "TheQuickBrownFox";
	char string2[] = "CiscoSwitchesAreBest";
	int n = 5;

	// strlwr(string1);					// converts to lower case
	// strupr(string1);					// converts to upper case
	// strcat(string1, string2); 		// concatinates two strings and stored in string 1
	strcpy(string1, string2);		// copies string 2 into string 1
	//strncpy(string1, string2, 3);		// copies till nth character of string2 to starting of string1

	printf("%s\n", string1);
	return 0;
}		
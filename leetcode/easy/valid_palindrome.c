# include <stdio.h>
# include <stdbool.h>
# include <strings.h>
# include <ctype.h> 

bool is_valid_Palindrome(char s[]){
	int s_len = strlen(s);

	// Remove special characters, numbers, and convert to lowercase
	char final_string[s_len +1];  
    int counter = 0;

    for (int i = 0; i < s_len; i++) {
        if (isalnum(s[i])) { 
            final_string[counter] = tolower(s[i]); // Convert to lowercase
            counter++;
        }
    }
    final_string[counter] = '\0'; // adds \0 at the end of the char array to end the string

	// to reverse a string 
	char rev_string[counter +1];
	for (int i = 0; i < counter; i++) {
        rev_string[i] = final_string[counter - 1 - i]; 
    }
    rev_string[counter] = '\0';	// to end the string

	// check if it's a palindrome or not
	return strcmp(final_string, rev_string) == 0;
}

int main(){
	char string[] = "0P";
	bool ans = is_valid_Palindrome(string);
	printf(" Palindrome: %d \n", ans);
	return 0;
}
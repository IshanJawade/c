# include <stdio.h>
# include <string.h>

int main(){
	char str[] = "anana";
	char str_rev[sizeof(str)] = "";

	int i = 0;
	for(int a=strlen(str)-1; a>=0; a--){
		str_rev[i] = str[a];
		i++;
	}

	str_rev[i] = '\0';	// adding the NULL charator at the end

	printf("String1: %s String2: %s\n", str, str_rev );

	if(strcmp(str, str_rev) == 0){
		printf("The string is a Palindrome!\n");
	} else {
		printf("The string is not a palindrome!\n");
	}
	
	printf("Compared output: %d\n", strcmp(str, str_rev));

	return 0;
}
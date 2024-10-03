// Manual method

# include <stdio.h>
# include <string.h>

int main(){
	char string[] ="gnirts a esreveR";
	// int string_length = sizeof(string) / sizeof(string[0]);
	int string_length = strlen(string);

	printf("%d \n", strlen(string));	

	for(int a=string_length; a>=0 ; a--){
		printf("%c", string[a]);
	}
	printf("\n");
	return 0;
}
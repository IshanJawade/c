# include <stdio.h>

int main(){
	char str[] = "desreveR";
	int len = sizeof(str) / sizeof(char);
	printf("Given string: %s \n", str);
	char r_str[len];
	int j = 0;
	// loop is starting from n-2 because last character is null terminator which is also got counted 
	for(int i=len - 2 ; i >=0 ; i--){
		r_str[j] = str[i];
		j++; 
	}
	// null terminator is added to complete the string
	r_str[j] = '\0';

	printf("Reversed string: %s \n", r_str);
	return 0;
}
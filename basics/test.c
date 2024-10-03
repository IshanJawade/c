# include <stdio.h>
# include <ctype.h>

int main(){
	int myNumbers[] = {10, 25, 50, 75, 100};
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

	printf("%d", length);  // Prints 5	
}
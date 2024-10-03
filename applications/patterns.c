# include <stdio.h>

int main(){

	// Right angled triagle 
	for(int a=1; a<=5; a++){
		for(int b=1; b<=a; b++){
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	// Inverted right angled triangle
	for(int c=5; c>=1; c--){
		for(int d=1; d<=c; d++){
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	

	return 0;
}
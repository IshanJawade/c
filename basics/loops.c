# include <stdio.h>

int main(){

	// For Loop
	for(int num=0; num<=5; num++){
		printf("%d", num);
	}
	printf("\n");

	// While Loop
	int x = 0;
	while (x <= 5){
		printf("%d", x);
		x++;
	}
	printf("\n");

	// Do While Loop
	int y=1;
	do{
		printf("Statement executed %d times",y);
		y++;
	} while (y < 2);
}
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
	
	srand(time(0)); // current time as a seed

	int random = (rand() % 6) + 1; // will generate random number between 1 and 6

	printf("Random Number: %d\n", random);
	return 0;
}
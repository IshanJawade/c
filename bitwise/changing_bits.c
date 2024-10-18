# include <stdio.h>

// function to print the number in binary
void print_binary(unsigned int n){
	for(int a=7; a>=0; a--){
		printf("%d",(n >> a) & 1);
	}
	printf("\n");
}

int main (){
	unsigned int REG = 0b00100010;
	printf("Current state of REG : ", REG);
	print_binary(REG);

	int BIT = 3;
	REG |= (1 << BIT);	// insert 1 in 3rd position (turning on)
	printf("Current state of REG : ", REG);
	print_binary(REG);

	REG &= ~(1 << BIT); // insert 0 in 3rd position (turning off)
	printf("Current state of REG : ", REG);
	print_binary(REG);

	return 0;
}
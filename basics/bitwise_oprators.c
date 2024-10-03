// BITWISE OPERATORS = special operators used for bit level programming 
// These are NOT logical operators like && (AND), || (OR) and ! (NOT)
											/*

& = AND		1 & 1 = 1
| = OR		1 & 0 = 1
^ = XOR		1 & 1 = 0
<< = Left Shift
>> = Right Shift
~  = Compliment  
											*/ 

# include <stdio.h>

int main(){
	int x = 6;	// 6  = 00000110
	int y = 12;	// 12 = 00001100
	int z = 0;	// 0  = 00000000

	z = x & y;
	printf("AND\nx & y = %d \n", z);

	z = x | y;
	printf("OR\nx | y = %d \n", z);

	z = x ^ y;
	printf("XOR\nx ^ y = %d \n",z);

	z = x << 1;		// shifting left once will give double (x2) of the number
	printf("Left Shift\n x << 1 = %d \n",z);

	z = x >> 1;		// Shifting right once will give half (1/2) of the number
	printf("Left Shift\n x >> 1 = %d \n",z);

	z = ~ y;
	printf("Compliment\n ~ x %d\n",z );
	return 0;
}
# include <stdio.h>

int main(){
	
	// Implicite Conversion: Automatic 

	float myFloat = 9; // Automatic conversion: int to float
	printf("%f\n", myFloat); // 9.000000

	
	int myInt = 9.99; // Automatic conversion: float to int
	printf("%d\n", myInt); // 9

	// Explicite Conversion: Manually

	float sum = (float) 5 / 2; // Manual conversion from int to float
	printf("%f\n", sum); // 2.500000

	int num1 = 5;
	int num2 = 2;
	float sum2 = (float) num1 / num2; // can also convert variable 
	printf("%f\n", sum2); // 2.500000

	return 0;
}

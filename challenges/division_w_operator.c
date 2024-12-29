# include <stdio.h>

int divison(int *n1, int *n2){
	
	// edge cases
	if (*n2 == 0){		// first filter
		printf("Undefiend \n");
		return 1;
	}
	if (*n1 == 0){		// second filter 
		*n1 = 0;
		*n2 = 0;
		return 0;
	}
	if( *n1 == *n2){	// third filter
		*n1 = 1;
		*n2 = 0;
		return 0; 
	}
	
	// variable declaration
	int num1 = *n1;
	int num2 = *n2;
	int quotient = 0;
	int remainder = 0;

	// to calculate remainder
	remainder = *n1 % *n2;

	// to calculate quotient
	while(num1 >= num2){
		num1 = num1 - num2;
		quotient ++;
	}
	*n1 = quotient;
	*n2 = remainder;
	return 0;
}

int main(){
	int n1 = 9; 	// dividend
	int n2 = 5;		// divisor
	int output = divison(&n1, &n2);
	if(output == 0){
		printf(" Quotient: %d Remainder: %d \n", n1, n2);
	}
	return 0;
}
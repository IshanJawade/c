# include <stdio.h>

int main(){
	char operator;
	double num1, num2;
	double result;

	printf("Enter the operator: ");
	scanf("%c", &operator);
	printf("Enter the first number: ");
	scanf("%lf", &num1);
	printf("Enter the second number: ");
	scanf("%lf", &num2);

	switch (operator) {
	case '+': 
		result = num1+num2;
		break;
	case '-': 
		result = num1-num2;
		break;
	case '*': 
		result = num1*num2;
		break;
	case '/': 
		result = num1/num2;
		break;
	default:
		printf("Invalid input");
		break;
	}
	printf("Result = %.3lf \n", result);
}
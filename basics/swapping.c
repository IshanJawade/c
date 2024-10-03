# include <stdio.h>

int main(){

	int a = 24, b=78;
	printf("a= %d b= %d", a,b);

	int* temp;
	temp = &a;
	a = b;
	b = temp;

	printf("a= %d b= %d", a,b);
	return 0;
}
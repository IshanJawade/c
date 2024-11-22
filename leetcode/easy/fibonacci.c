// returns nth value in fibonacci series

# include <stdio.h>

int fibonacci(int n){
	int sum, x, y;
	sum = 0;
	x = 1;
	y = 0;
	if(n == 1) return 1;
	else if(n == 2) return 1;
	else {
		for(int i=1; i<n; i++){
			sum = x+y;
			y=x;
			x=sum;
		}
	}

	return sum;
}

int main(){
	int n = 10;
	printf("%d \n", fibonacci(n));
	return 0;
}
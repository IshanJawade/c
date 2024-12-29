# include <stdio.h>

int number_of_bits(int n){
	int sum = 0;
	if(n < 0){
		n = n*(-1);
	}
	while( n!= 0){
		if ((n&1) != 0 ){
			sum ++;
		}
		n = n >> 1;
	}
	return sum;
}

int main(){
	int num = -1;
	int sol = number_of_bits(num);
	printf("%d \n",sol);
}
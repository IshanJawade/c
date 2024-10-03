# include <stdio.h>

int count_digits(int x){
	int num = x;
	int count = 0;
	while(num != 0){
		num = num / 10;
		count++;
	}
	return count;
}

long reverse(int x){
	long rev_num = 0;
	while(x != 0){
		rev_num = rev_num * 10 + (x % 10);
		x = x/10;
	}
	return rev_num;
}

int main(){
	const int number = 123456789;
	printf("Digits in the numnber: %d\n",count_digits(number));
	printf("Reversed number: %d\n", reverse(number));
}
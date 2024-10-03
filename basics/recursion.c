# include <stdio.h>

int sum(int num);

int main(){
	printf("%d", sum(10));
}

int sum(int num){
	if(num > 0){
		return num + sum (num-1);
	}
	return 0;
}
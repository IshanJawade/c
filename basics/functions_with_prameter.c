# include <stdio.h>

int addition(int a, int b){
	return a+b;
}

char fullName(char first_name[], char last_name[]){
	printf("Hi %s %s\n", first_name,last_name);
}

int main(){

	printf("%d\n",addition(134, 345));
	int result = addition(453, 33);
	printf("%d\n",result);
	printf("%d\n",addition(865, 42));
	printf("%d\n",addition(986, 63));

	fullName("Ishan", "Jawade");
	fullName("Something", "Jawade");
	fullName("Advait", "Jawade");
	fullName("Ashwini", "Jawade");

	return 0;
}
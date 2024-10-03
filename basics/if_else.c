# include <stdio.h>

int main(){

	// Traditional If Else
	int time=20;

	if(time<18){
		printf("Good Day!\n");
	} else {
		printf("Good Evening!\n");
	}

	// Short-handed if else
	time = 18;

	(time<20) ? printf("Good Day!") : printf("Good Evening!"); 
	// ^if			^do this 			^other wise do this
	return 0;
}
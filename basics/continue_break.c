# include <stdio.h>

int main(){
	// break statement to jump out of loop
	for (int a=0; a<=10; a++){
		if(a==5){
			break;
		}
		printf("%d\n",a);
	}

	printf("\n");

	int i=1;
	while(i<=10){
		if(i==4){
			break;
		}
		printf("%d\n",i);
		i++;
	}

	printf("\n");

	// continue statement to skip one iteration from a loop
	for(int b=0; b<=10; b++){
		if(b==5){
			continue;
		}
		printf("%d\n",b);
	}


}
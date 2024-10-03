# include <stdio.h>
# include <strings.h>	// advance stuff

void main(){

	printf("What is your full name?\n");
	char name[25];
	// scanf("%s", &name);
	fgets(name, 25, stdin);
	name[strlen(name)-1] = '\0';	// advance stuff

	printf("What is your age?\n");
	int age;
	scanf("%d", &age);

	printf("Hi %s, you are %d years old.\n", name, age);
}
# include <stdio.h>
# include <ctype.h>

int main(){
	char name[5] = {'i','s','h','a','n'};
	char name1[] = "ishan";
	printf("name: %d \nname1: %d", sizeof(name)/sizeof(char), sizeof(name1 )/sizeof(char));
}
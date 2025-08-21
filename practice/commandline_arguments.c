// program to use command line arguments 

# include <stdio.h>
# include <stdlib.h>	// contains atoi() fucntion to convert ASCII to int


/*	"int argc" stores argument count. it includes program name + arguments
	"char *argv[]" stores arguments from commandline into a string
	int argc = 3 	i.e ./calc 3 4
	char argv[] = {"./calc", "3", "4"}; 3 items 
*/
int main(int argc, char *argv[]){

	// check if argument count matches to the requirements
	if(argc != 3){
		printf("Invalid arguments !\nUsage: ./program_name <num1> <num2>\n");
		return 1;
	}
	// atoi() fucntion to convert ASCII to int
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = a+b;

	printf("%d\n",c);
	return 0;
}
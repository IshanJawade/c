# include <stdio.h>
# include <stdlib.h>
# include <string.h>


// function declarations

void login();
void signup();
void deposite(int);
void withdraw(int);
void payment();


typedef struct {
	char username[32];
	char password[32];
	int date, month, year;
	char ac_type[10];
	long int balance;  
} user;

// main function 
int main(){
	// Greetings
	system("clear");
	printf("\t Welcome to Bank of California \n\n\n\n\n\n");
	printf("Press return to proced ...\n");
	getchar();

	// User menu interface
	int ch;
	while(ch != 0){
		printf("\tEnter your choice:\n");
		printf("1) Create new bank account\n2) Deposite money in the account\n");
		printf("3) Withdraw money from the account\n4) Do payment to other account\n");
		printf("0) Quit \n# ");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				printf("Call create_account \n");
				break;
			case 2:
				printf("Call deposite \n");
				break;
			case 3:
				printf("Call withdraw \n");
				break;
			case 4:
				printf("Call payment \n");
				break;
			case 0:
				printf("Exit code \n");
				break;
			default:
				printf("Invalid input! \n");
			break;
		}
		getchar(); // to consume new line charactor by scanf
		printf("Press a key to continue ...");
		getchar();
		system("clear");
	}

	return 0;
}

// function definitions 

void signup(){
	user u1;
	u1.username = "ishanjawade";
	u1.password = "ishan@1234";
	u1.date = 03; u1.month = 07; u1.year = 200;
	u1.ac_type = "SAVINGS";
}


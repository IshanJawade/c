# include <stdio.h>
# include <stdlib.h>
# include <string.h>


// function declarations

int login();
int signup();
void deposite(int);
void withdraw(int);
void payment();


typedef struct {
	char username[32];
	char password[32];
	int date, month, year;
	char ac_type[10];
	long int balance;  
} Account ;

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
		printf("1) Create new bank account\n2) login\n");
		printf("3) Withdraw money from the account\n4) Do payment to other account\n");
		printf("0) Quit \n# ");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				signup();
				break;
			case 2:
				login();
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
		// system("clear");
	}

	return 0;
}

// function definitions 

int signup(){
	Account u1;
	strcpy(u1.username, "ishanjawade");
	strcpy(u1.password, "ishan@1234");
	u1.date = 03; u1.month = 07; u1.year = 2000;
	strcpy(u1.ac_type, "SAVINGS");
	
	FILE *file = fopen("accounts.dat", "wb");
	if(file == NULL){
		printf("Error opening file!\n");
		return 1;
	}

	int w_count = 0;
	w_count = fwrite(&u1, sizeof(Account), 1, file);
	fclose(file);
	if(!w_count){
		printf("Something went wrong, account has not been created! \n");
		return 1;
	}

	printf("New account has been created successfully \n");
	return 0;
}

int login(){	// success = 0 , failure = 1 .
	char username[32];
	char password[32];

	printf("username: ");
	scanf("%s", username);

	FILE *file = fopen("accounts.dat", "rb");

	Account rec;
	int found = 0;

	while(fread(&rec, sizeof(Account), 1, file) == 1){
		if(strcmp(rec.username, username)== 0){
			found = 1;
			
			printf("password: ");
			scanf("%s", password);

			if(strcmp(rec.password, password)== 0){
				printf("Authenticated successfully \n");
				fclose(file);
				return 0;
			}else {
				printf("Password is not matching! \n");
				fclose(file);
				return 1;
			}
		}
	}
	if (!found){
		printf("User not found : Invalid user! \n");
	}
	return 1;
}


# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

typedef struct Account{
	int acNumber;
	char acName[64];
	char username[32];
	char password[32];
	char acAddress[256];
	long int acBalance;
	bool acStatus;
} Account;

void create_account();
bool login(char usrname[], char paswd[]);
int check_balance();
void debit(int amount);
void credit(int amount);
void show_account_details();

int main(int argc, char *argv[]){
	return 0;
}

void create_account(int acNumber, char acName[], char username[],char password[],
							char acAddress[], long int acBalance, bool acStatus,){
	Account *ac = (Account *) malloc(sizeof(Account));
	strcpy(ac->acName, acName);
	strcpy(ac->username, username);

}
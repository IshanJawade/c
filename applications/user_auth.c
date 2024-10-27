# include <stdio.h>
# include <string.h>

typedef struct {
	char username[32];
	char password[32];
} User;

int signup();
int login();

int main(){
	int ch;

	while(ch != 0){
		printf("1) Sign Up\n2) Login\n0) Exit\n=> ");
		scanf("%d", &ch);
		switch (ch){
		case 1:
			signup();
			break;
		case 2:
			login();
			break;
		case 0:
			printf("Exiting ... \n")
			return 1;
			break;
		default:
			printf("Invalid input...\n");
			break;
		}
	}
	return 0;
}

int signup(){
	User u1;
	char re_pass[32]; // re-enter password

	printf("Enter username: ");
	scanf("%s", u1.username);
	
	printf("Enter password: ");
	scanf("%s", &u1.password);
	
	printf("Re-enter password: ");
	scanf("%s", &re_pass);

	while(strcmp(re_pass, u1.password)!= 0){
		printf("Password not matching ... \nRe-enter password: ");
		scanf("%s", &re_pass);
	}
	
	FILE *file = fopen("users.dat", "ab");
	if(file == NULL){
		printf("Error opening file!\n");
		return 1;
	}

	int w_count = 0;
	w_count = fwrite(&u1, sizeof(User), 1, file);
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

	FILE *file = fopen("users.dat", "rb");

	User rec;
	int found = 0;

	while(fread(&rec, sizeof(User), 1, file) == 1){
		if(strcmp(rec.username, username)== 0){
			found = 1;

			printf("password: ");
			scanf("%s", password);

			if(strcmp(rec.password, password)== 0){
				printf("Authenticated successfully \n");
				fclose(file);
				return 0;
			}else {
				printf("Password for %s is incorrect! \n", rec.username);
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
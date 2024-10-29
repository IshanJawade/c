# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct {
	char username[32];
	char password[32];
} User;

int signup();
int login();
int view_users();
int delete_user();

int main(){
	int ch;

	while(ch != 0){
		system("clear");
		printf("--- Main Menu ---\n\n1) Sign Up\n2) Login\n3) View Users \n4) Delete User\n0) Exit\n\n=> ");
		scanf("%d", &ch);
		switch (ch){
		case 1:
			system("clear");
			signup();
			break;
		case 2:
			system("clear");
			login();
			break;
		case 3:
			system("clear");
			view_users();
			break;
		case 4:
			system("clear");
			delete_user();
			break;
		case 0:
			printf("Exiting ... \n");
			return 1;
			break;
		default:
			printf("Invalid input...\n");
			printf("\nPress return to continue ... \n");
			getchar();
			getchar();
			break;
		}
	}
	return 0;
}

int signup(){
	User u1;
	char re_pass[32]; // re-enter password
	printf("--- Sign Up ---\n\n");
	printf("Enter username: ");
	scanf("%s", u1.username);
	
	printf("Enter password: ");
	scanf("%s", u1.password);
	
	printf("Re-enter password: ");
	scanf("%s", re_pass);

	while(strcmp(re_pass, u1.password)!= 0){
		printf("Password not matching ... \nRe-enter password: ");
		scanf("%s", re_pass);
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

	printf("\nNew account has been created successfully \n");
	printf("\nPress return to continue ... \n");
	getchar();
	getchar();
	return 0;
}

int login(){	// success = 0 , failure = 1 .
	char username[32];
	char password[32];
	printf("--- Login ---\n\n");
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
				printf("\nPress return to continue ... \n");
				getchar();
				getchar();
				return 0;
			}else {
				printf("Password for %s is incorrect! \n", rec.username);
				fclose(file);
				printf("\nPress return to continue ... \n");
				getchar();
				getchar();
				return 1;
			}
		}
	}
	if (!found){
		printf("\nUser not found : Invalid user! \n\nPress return to continue ...\n");
		getchar();
		getchar();
	}
	return 1;
}

int view_users(){
	User u;
	FILE *file = fopen("users.dat", "rb");
	if(file == NULL){
		printf("Error opening file!\n");
		return 1;
	}
	int cont = 1;
	printf("--- Available Users ---\n\n");
	while(fread(&u, sizeof(User), 1, file) == 1){
		printf("%d) %s\n", cont, u.username);
		cont ++;
	}
	printf("\n-------------------------\n");
	printf("Press return to continue ... \n");
	getchar();
	getchar();
	fclose(file);

	return 0;
}

int delete_user(){
	User u;
	int found = 0;
	char ch;

	printf("--- Delete User --- \n\n");
	printf("Username: ");
	char usr[32];
	scanf("%s", usr);

	printf("Are you sure? (Y/n)\n");
	scanf(" %c", &ch);

	if(ch == 'y' || ch == 'Y'){
		FILE *file = fopen("users.dat", "rb");
		if(file == NULL){
			printf("Error opening file!\n");
			return 1;
		}

		FILE *temp = fopen("temp.dat", "wb");
		if(temp == NULL){
			printf("Error opening file!\n");
			return 1;
		}

		while(fread(&u, sizeof(User), 1, file) == 1){
			if(strcmp(u.username, usr) == 0){
				found = 1;
			}else{
				fwrite(&u, sizeof(User), 1, temp);
			}
		}

		fclose(file);
		fclose(temp);

		remove("users.dat");
		rename("temp.dat", "users.dat");
		return 0;
	} else {
		printf("\nDeletion cancelled by the user\n\nPress return to continue ...\n");
		getchar();
		getchar();
		return 1;
	}
	if(!found){
		printf("\nUser not found : Invalid user! \n\nPress return to continue ...\n");
		getchar();
		getchar();
	}
}
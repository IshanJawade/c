# include <stdio.h>

typedef struct {
	int id;
	char name[10];
	float balance;
} Account;

int main(){

	Account user = {101, "Ishan", 13500.45};

	// writing to the file
	FILE *file = fopen("account.dat", "wb");
	if(file == NULL){
		printf("Error opening file!\n");
		return 1;
	}

	int w_count = fwrite(&user, sizeof(Account), 1, file);
	printf("%d elements has been written successfully\n", w_count);
	fclose(file);

	// reading from a file
	Account read_user;

	file = fopen("account.dat", "rb");
	if (file == NULL){
		printf("Error opening file! \n");
	}

	int r_count = fread(&read_user, sizeof(Account), 1, file);
	printf("%d elements has been read successfully\n", r_count);
	fclose(file);

	printf("\nId: %d \nName: %s \nBalance: %.2f \n", user.id, user.name, user.balance);
	
	return 0;
}



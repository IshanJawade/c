# include <stdio.h>

// typedef is a keyword that gives an existing datatype a nickname;

typedef struct {
	char name[30];
	char pass[30];
	int id;
} user;

int main(){
	user user1 = {"Ishan", "password123", 12345};
	printf("%s %s %d \n", user1.name, user1.pass, user1.id);
}
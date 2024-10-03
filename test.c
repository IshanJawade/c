# include <stdio.h>
# include <stdlib.h>

typedef struct Student{
	char full_name[50];
	int contact_numnber;
	char country[];
}Student;

int main(){
	Student student1 = {" "};
	return 0;
}
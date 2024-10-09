# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct {		// custome datatype
	char full_name[50];
	int contact_numnber;
	char country[50];
} Student;

Student* create_entry(char name[], int no, char coun[]){
	Student *stud = (Student *) malloc (sizeof(Student));
	strcpy(stud->full_name, name); 	// can't assign strings directly to the variable
	stud->contact_numnber = no;
	strcpy(stud->country, coun);
	return stud;
}

int main(){
	Student students[5];	// custome datatype array
	Student s1 = {"Ishan Jawade", 236532456, "India"};  // direct assignment
	students[1] = s1;

	// function assignment dynamic memory allocation
 	Student *stud = create_entry("Advait Jawade", 561332456, "USA");
	students[2] = *stud;
	free(stud);

	

	printf("Name: %s Number: %d Country: %s \n", students[1].full_name, students[1].contact_numnber, students[1].country );
	printf("Name: %s Number: %d Country: %s \n", students[1].full_name, students[2].contact_numnber, students[2].country );
	return 0;
}
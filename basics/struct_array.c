# include <stdio.h>

typedef struct {
	char name[50];
	float gpa;
} student ;

int main(){
	student student1 = {"Ishan", 3.7};
	student student2 = {"Ayushi", 3.9};
	student student3 = {"Advait", 3.6};
	student student4 = {"John", 2.7};
	student student5 = {"Arthur", 3.4};

	// making array of struct student
	student students[] = {student1, student2, student3, student4, student5};


	// length of an array
	int length = sizeof(students) / sizeof(students[0]);
	
	// iterating through the array
	for(int a=0; a < length; a++){
		printf("Name: %- 12s GPA: %.1f \n", students[a].name, students[a].gpa);
	}

	return 0;
}
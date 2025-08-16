# include <stdio.h>
# include <stdlib.h>

typedef struct Student{
	int rollNum;
	char name[32];
} Student;


int main(){

	Student s1 = {101, "Ishan Jawade"};
	Student s2 = {102, "Pratik Kakade"};
	Student s3 = {103, "Rushikesh Jadhav"};
	Student s4 = {104, "Ameya Kale"};
	Student s5 = {105, "Bhavika Kulkarni Kale"};

	Student students[] = {s1,s2,s3,s4,s5};
	int studLen = sizeof(students)/ sizeof(Student);

	// Making a file pointer to create or read the file
	FILE *file = fopen("student_data.dat", "wb");
	if(file == NULL){
		printf("File opening/creation error !\n");
		exit(1);
	}

	// writing into the file
	int write_count = 0;
	for(int i=0; i<studLen; i++){
		write_count = write_count + fwrite(&students[i], sizeof(Student), 1, file);
	}
	printf("Data successfully written to the file. Count: %d\n", write_count);
	fclose(file);

	// Reading throught the file
	Student student;

	file = fopen("student_data.dat", "rb");
	if(file == NULL){
		printf("Cannot read the file !\n");
		exit(1);
	}

	int read_count = 0;
	while(fread(&student, sizeof(Student), 1, file) == 1){
		read_count++;
		printf("Roll: %-4d Name: %-15s \n",student.rollNum, student.name);
	}
	printf("\nData successufully read from the file. Count: %d\n", read_count);
	fclose(file);

	return 0;
}
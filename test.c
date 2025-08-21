# include <stdio.h>
# include <pthread.h>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>

// typedef struct student{
// 	int id;
// 	char firstName[32];
// 	char lastName[32];
// 	char *subjects[20];
// 	bool status;
// }

int main(){
    char *subjects[] = {"Mathematics", "History", "Science", "Language", "Civics", "Geography"};
    int sub_len = sizeof(subjects)/sizeof(subjects[0]);

    char arr[] = "Computer" ;

    subjects[2] = arr; 

    for (int i = 0; i < sub_len; i++)
    {
        printf("%s\n", subjects[i]);
    }
    
    return 0;

}
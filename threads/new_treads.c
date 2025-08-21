# include <stdio.h>
# include <pthread.h>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct student{
	int id;
	char firstName[32];
	char lastName[32];
	char *subjects[20];
	bool status;
}
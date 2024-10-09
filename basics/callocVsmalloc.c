# include <stdio.h>
# include <time.h>
# include <stdlib.h> 

int main(){
	int *array;

	clock_t tic, toc;
	tic = clock();
	// malloc  : allocates desired memory 
	array = malloc (sizeof(int) * 1000000);  
	toc = clock();
	printf("malloc: %fs secs \n", (double) (toc - tic) / CLOCKS_PER_SEC);
	free(array);

	tic = clock();
	// calloc  : allocates memory and assigned zero to each memory location
	array = calloc (1000000, sizeof(int));	
	toc = clock();
	printf("calloc: %fs secs\n", (double) (toc - tic) / CLOCKS_PER_SEC);
	free(array);

	return 0;
}
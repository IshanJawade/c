# include <stdio.h>

int main(){
	
	int myNumbers[] = {10, 20, 30, 40, 50};

	printf("%d\n", myNumbers[3]);

	//Calculate number of elements in the array
	printf("Size of array in bytes: %d\n", sizeof(myNumbers));

	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

	printf("Number of elements in the array: %d\n", length);

	// Iterating elements from the Array
	for(int a=0; a<length; a++){
		printf("%d\n",myNumbers[a]);
	}

	// Alter elements from the array

	return 0;
}
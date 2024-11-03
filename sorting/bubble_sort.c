# include <stdio.h>

void bubble_sort(int array[], int len){
	
}

int main(){
	int array[] = {64, 34, 25, 12, 22, 11, 90};
	int len = sizeof(array) / sizeof(int);

	printf("Given array:  ");
	for(int a=0; a < len; a++){
		printf("%d ", array[a]);
	}
	printf("\n");

	for(int a=0; a < len; a++){
		for(int b=0; b < len - a - 1; b++){
			if(array[b] > array[b+1]){		// change the sign to sort in decending order
				int temp = array[b+1];
				array[b+1] = array[b];
				array[b] = temp;
			}
		}
	}

	printf("Sorted array: ");
	for(int a=0; a < len; a++){
		printf("%d ", array[a]);
	}
	printf("\n");

	return 0;
}


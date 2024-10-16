# include <stdio.h>

int array[] = {64, 34, 25, 12, 22, 11, 90};
int array_len = sizeof(array) / sizeof(int);

void bubble_sort(int array[]){
	for(int a=0; a<array_len; a++){
		for(int b=0; b<array_len-a-1; b++){
			if(array[b] > array[b+1]){
				int temp = array[b+1];
				array[b+1] = array[b];
				array[b] = temp;
			}
		}
	}
}

int main(){
	// int array[] = {64, 34, 25, 12, 22, 11, 90};
	bubble_sort(array);
	for(int a=0; a<array_len; a++){
		printf("%d, ", array[a]);
	}
	printf("\n");
	return 0;
}


# include <stdio.h>

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
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arr_len = sizeof(arr)/sizeof(int);
    printf("Given Array: \n");
    for(int a=0; a< arr_len; a++){
		printf("%d, ", arr[a]);
	}
	bubble_sort(array);
    printf("Sorted Array: \n")
	for(int a=0; a< arr_len; a++){
		printf("%d, ", arr[a]);
	}
	printf("\n");
	return 0;
}

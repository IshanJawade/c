# include <stdio.h>

int main(){
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int len = sizeof(arr)/sizeof(int);
	printf("Given array:  ");
	for(int i=0; i < len-1; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	for(int a = 1; a < len; a++) {
    int prev = a - 1;
    int temp = arr[a];

    // Shift elements to the right until finding the correct position for temp
    while(prev >= 0 && arr[prev] > temp) {
        arr[prev + 1] = arr[prev];
        prev--;
    }
    arr[prev + 1] = temp;  // Place temp in its correct position
	}


	printf("Sorted array: ");
	for(int a=0; a < len; a++){
		printf("%d ", arr[a]);
	}
	printf("\n");

	return 0;
}
# include <stdio.h>

int main(){
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int len = sizeof(arr)/sizeof(int);
	printf("Given array:  ");
	for(int i=0; i < len-1; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	int temp, min;
	for(int a=0; a < len-1; a++){
		min = a;
		for(int b = a+1; b < len; b++){
			if(arr[min] > arr[b]){		// change the sign to sort in decending order
				min = b;
			}
		}
		temp = arr[a];
		arr[a] = arr[min];
		arr[min] = temp;
	}

	printf("Sorted array: ");
	for(int i=0; i < len-1; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}
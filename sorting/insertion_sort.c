# include <stdio.h>

int main(){
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int len = sizeof(arr)/sizeof(int);
	printf("Given array:  ");
	for(int i=0; i < len-1; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	for(int a=1; a < len ; a++){
		int prev = a-1;
		while(prev != 0){
			if(arr[prev] > arr[a]){
				int temp = arr[prev];
				arr[prev] = arr[a];
				arr[a] = temp; 
			}
			prev --;
		}
	}

	printf("Sorted array: ");
	for(int a=0; a < len; a++){
	}
	printf("\n");

	return 0;
}
// implemented on BIT level only posotive integers

# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

bool duplicate_finder(int arr[], int len){
	bool flag = false;
	int BIT = 0;
	
	for(int a=0; a<len; a++){
		if (arr[a] < 0) {
			arr[a] = arr[a] * (-1);
		}
		if((BIT & (1 << arr[a])) != 0){
			flag = true;
			break;
		}
		else {
			if (arr[a] < 0) {
				arr[a] = arr[a] * (-1);
			}
			BIT |= (1 << arr[a]); 
		}
	}

	return flag;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int num = 0;
	int len = sizeof(arr)/sizeof(int);
	printf("%d \n", duplicate_finder(arr, len));
}
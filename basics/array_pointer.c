/*
Notes:	 p = pointer to the whole array. But has the same address as the first element
		*p = address of first element of the array
		**p = first element of the array
*/

# include <stdio.h>

void arr_alter(int (*p)[10]){
	(*p)[5] = 40;
	(*p)[8] = 70;
	(*p)[3] = 20;
}

int main(){
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int (*p) [10] = &arr;
	for(int a=0; a<10; a++){
		printf("%d ", arr[a]);
	}
	printf("\n");
	arr_alter(p);
	for(int a=0; a<10; a++){
		printf("%d ", arr[a]);
	}
	printf("\n");
	return 0;
}


/*
    Remove the duplicate elements from the array
    without using any variables
*/ 

# include <stdio.h>

int duplicate(int *array, int arr_len){
    for(int a=0; a < arr_len; a++){
        for(int b=a+1; b < arr_len; b++){
            if(array[b] == array[a]){
                array[b] = array[b]+array[arr_len-1];
                array[arr_len-1] = array[b]-array[arr_len-1];  // XOR swapping with last element
                array[b] = array[b]-array[arr_len-1];
                arr_len--;      // reducing the array length
            }
        }
    }
    return arr_len;
}

int main()
{
    int array[] = {23, 45, 66, 87, 0, 3, 45, 10, 66}; 
    int size = sizeof(array)/sizeof(int);
    size = duplicate(array, size);
    for(int a=0; a<size; a++){
        printf("%d ", array[a] );
    }
    printf("\n");
    return 0;
}

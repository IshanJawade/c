# include <stdio.h>

int main()
{
    int arr[11] = {1,4,6,4,5,5,7,3,1,6,7};
    int result = 0;
    for(int a=0; a<11; a++){
        result ^= arr[a]; 
    }
    printf("%d comes only once in the array \n", result);
}
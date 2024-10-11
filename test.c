#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n");
}


int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Pass a pointer to the first element of the array to the function
    printArray(&numbers[0], size);
    printArray(numbers, size);
    
    return 0;
}

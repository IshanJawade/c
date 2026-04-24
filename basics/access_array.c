#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int i = 2;
    int *ptr = arr;   // ptr points to first element of arr

    // 1. Normal array indexing
    printf("arr[i] = %d\n", arr[i]);   // arr[2] = 30

    // 2. Pointer arithmetic with array name
    printf("*(arr + i) = %d\n", *(arr + i));   // same as arr[i]

    // 3. Pointer indexing
    printf("ptr[i] = %d\n", ptr[i]);   // same as arr[i]

    // 4. Pointer arithmetic with pointer variable
    printf("*(ptr + i) = %d\n", *(ptr + i));   // same as arr[i]

    // 5. Using address of first element
    printf("*(&arr[0] + i) = %d\n", *(&arr[0] + i));   // same as arr[i]

    // 6. Direct dereference of first element
    printf("*arr = %d\n", *arr);   // arr[0] = 10

    // 7. Dereference pointer
    printf("*ptr = %d\n", *ptr);   // arr[0] = 10

    // 8. Weird but valid reverse indexing
    printf("i[arr] = %d\n", i[arr]);   // same as arr[i]

    // 9. Accessing a fixed index directly
    printf("*(ptr + 3) = %d\n", *(ptr + 3));   // arr[3] = 40

    // 10. Common confusion
    printf("*ptr + 3 = %d\n", *ptr + 3);   // 10 + 3 = 13, NOT arr[3]

    // 11. Using incremented pointer
    ptr++;   // now ptr points to arr[1]
    printf("After ptr++, *ptr = %d\n", *ptr);   // arr[1] = 20

    return 0;
}
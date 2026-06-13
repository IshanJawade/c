# include <stdio.h>

int main(){

    char ch =  100;
    printf("Address of ch: %p \n", &ch);

    char* ptr = &ch;

    char newData = *ptr;

    printf("Data fetched from *ptr: %d \n", newData);

    *ptr = 122;

    printf("New value of ch: %d \n", ch);


    return 0;
}
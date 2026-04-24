#include<stdio.h>
#include "external_fucntion.h"

// gloabl variable not accesible in external_function
static int number;

int main(){
    number = 12;

    printf("number:%d \n", number);
    
    external_function();
    
    printf("number:%d \n", number);

    return 0;
}
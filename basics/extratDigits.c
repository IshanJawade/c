#include <stdio.h>
#include <ctype.h>     // for isdigit()
#include <stdlib.h>    // for atoi()

int main(){
    char str[] = "ishan37200";

    char *p = str; // pointer to the first element of the array

    // As long as the current character pointed to by p is not the end of the string, 
    // and it is not a digit, move p to the next character.
    while(*p && !isdigit(*p)){
        p++;
    }

    // now out *p is pointed at the number in char array
    int num = atoi(p);

    printf("%d \n", num);
    return 0; 
}
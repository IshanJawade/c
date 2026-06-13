#include <stdio.h>
#include <stdint.h>

int main(){

    int num;
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &num);

    // ....0 odd     ....1 even
    (num & 1) ? printf("Entered number is Odd\n"): printf("Entered number is Even\n");

    return 0;
}
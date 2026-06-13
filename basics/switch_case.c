#include <stdio.h>
#include <stdint.h>

int main(){

    printf("Enter one of the character from the following for the specific shape:\n");
    printf("t : Triangle\ns : Square\nh : Hexagon\nc : Circle\n=>");
    char ch;
    scanf("%c", &ch);
    switch (ch)
    {
    case 't':
        printf("Area of Triangle\n");
        break;
    case 's':
        printf("Area of Square\n");
        break;
    case 'h':
        printf("Area of Hexagon\n");
        break;
    case 'c':
        printf("Area of circle\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }

    return 0;
}
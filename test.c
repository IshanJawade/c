# include <stdio.h>
# include <string.h>
# include <stdlib.h>



int main() {

    unsigned int flags = 0b0; // Initialize flags variable correctly
    flags ON_A; 
    print_binary(flags);
    flags ON_B; 
    print_binary(flags);
    flags OFF_A;
    print_binary(flags);

    printf("%d\n", flags); // Print the flags as an unsigned integer
    return 0;
}
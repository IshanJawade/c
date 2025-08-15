# include <stdio.h>
# include <string.h>
# include <stdlib.h>

// Shortcuts to turn flags ON
#define ON_A |=(1 << 0) 
#define ON_B |=(1 << 1)
#define ON_C |=(1 << 2) 
#define ON_D |=(1 << 3)

// Shortcuts to turn flags OFF 
#define OFF_A &= ~(1 << 0)
#define OFF_B &= ~(1 << 1)
#define OFF_C &= ~(1 << 2)
#define OFF_D &= ~(1 << 3)

// this function prints binary value
void print_binary(unsigned int n){
	for(int a=7; a>=0; a--){
		printf("%d",(n >> a) & 1);
	}
	printf("\n");
}


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
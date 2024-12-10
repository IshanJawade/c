# include <stdio.h>
# include <string.h>
# include <stdlib.h>

// Shortcuts to change 1,2 and 3 flag to ON which are A B and C respectively
#define flag_A |=(1 << 0)  // 1
#define flag_B |=(1 << 1)  // 2
#define flag_C |=(1 << 2)  // 4 
#define flag_D |=(1 << 3)  // 4 

#define flag_0A &= ~(1 << 0)
#define flag_0B &= ~(1 << 1)
#define flag_0C &= ~(1 << 2)
#define flag_0D &= ~(1 << 3)

void print_binary(unsigned int n){
	for(int a=7; a>=0; a--){
		printf("%d",(n >> a) & 1);
	}
	printf("\n");
}


int main() {

    unsigned int flags = 0b0000; // Initialize flags variable correctly
    flags flag_A; 
    print_binary(flags);
    flags flag_B; 
    print_binary(flags);
    flags flag_0A;
    print_binary(flags);

    printf("%u\n", flags); // Print the flags as an unsigned integer
    return 0;
}
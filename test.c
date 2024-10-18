# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

void print_binary(unsigned int n) {
    for (int i = 7; i >= 0; i--) {  // For 8-bit representation
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    unsigned int REG = 0b00001010;  // Initial value of the register (10 in decimal)
    int BIT = 2;                    // We want to set the 2nd bit (counting from 0)

    REG |= (1 << BIT);  // Set the 2nd bit to 1

    printf("After setting bit %d, REG = 0b", BIT);
    print_binary(REG);  // Print binary representation
    printf("\n");

    return 0;
}

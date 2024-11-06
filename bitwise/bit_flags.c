#include <stdio.h>

typedef unsigned int t_flag; // Define t_flag as an alias for unsigned int

// Define unique flags using bit shifting
#define flag_A (1 << 0)  // 1
#define flag_B (1 << 1)  // 2
#define flag_C (1 << 2)  // 4 (fixed from flag_B)

int main() {
    t_flag flags = 0; // Initialize flags variable correctly
    flags |= flag_A; // Set flag_A

    // Optionally set flag_B and flag_C for demonstration
    flags |= flag_B; // Set flag_B
    // flags |= flag_C; // Uncomment to also set flag_C

    printf("%u\n", flags); // Print the flags as an unsigned integer
    return 0;
}

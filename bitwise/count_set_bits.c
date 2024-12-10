// count 1s in the binary representation of the number

# include <stdio.h>

int count_set_bits(int n) {
    int count = 0;
    while (n) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main(){
	int n = 0b111111;
	printf("Number:%d \n",n);
	printf("Number of set bits: %d \n", count_set_bits(n));
}
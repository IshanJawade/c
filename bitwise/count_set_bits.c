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
	int n = 111111;
	printf("%d \n", count_set_bits(n));
}
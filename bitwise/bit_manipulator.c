# include <stdio.h>

#define flag_A (1 << 0) // 1st bit
#define flag_B (1 << 1) // 2nd bit
#define flag_C (1 << 2) // 3rd bit
#define flag_D (1 << 3) // 4th bit

#define ON |=           // Turn ON
#define OFF &= ~        // Turn OFF
#define TOG ^=          // Toggle

// funtion to print number in binary 
void print_binary(int n){
    printf("%-2d ", n);
	for(int a=7; a>=0; a--){
		printf("%d",(n >> a) & 1);
	}
	printf("\n");
}

int main(){
    int flag = 0;

    flag ON flag_A;
    flag ON flag_B;
    flag ON flag_C;
    flag ON flag_D;
    print_binary(flag);

    flag OFF flag_B;
    flag OFF flag_D;
    print_binary(flag);

    flag TOG flag_A;
    flag TOG flag_C;
    flag TOG flag_B;
    flag TOG flag_D;
    print_binary(flag);

    return 0;
}
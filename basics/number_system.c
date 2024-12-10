# include <stdio.h>

int main(){
	int bin = 0b00001010;   // 0b for binary
	int hex = 0xA;			// 0x for hex		
	int dec = 10;			// no suffix for decimal 
	int oct = 012;			// 0 for octal

	printf("(bin) 0b00001010: %d \n", bin);
	printf("(hex) 0xA       : %d \n", hex);
	printf("(dec) 10        : %d \n", dec);
	printf("(oct) 012       : %d \n", oct);
}
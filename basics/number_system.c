# include <stdio.h>

int main(){
	int bin = 0b00001010;   // 0b for binary
	int hex = 0xA;			// 0x for hex		
	int dec = 10;			// no suffix for decimal 
	int oct = 012;			// 0 for octal

	printf("%d \n", bin);
	printf("%d \n", hex);
	printf("%d \n", dec);
	printf("%d \n", oct);
}
# include <stdio.h>
# include <math.h>

float calculate_hypotenious(float s1, float s2);

int main(){
	float side1, side2;
	printf("Enter the side 1 and side 2 of a triangle: ");
	scanf("%f %f", &side1, &side2);

	printf("Hypotinous of the triangle is %.2f", calculate_hypotenious(side1,side2));
}

float calculate_hypotenious(float s1, float s2){
	return sqrt((s1*s1)+(s2*s2));
}
# include <stdio.h>

// fucntion declaration
double area_of_circle();
double circumference_of_circle();


int main(){
	const double PI = 3.14159;
	double radius;

	printf("Enter the radius of the circle: ");
	scanf("%lf", &radius);
	
	printf("Circumference of the circle is %.2lf \n", circumference_of_circle(radius, PI));
	printf("Area of the circle is %.2lf \n", area_of_circle(radius, PI));
}

// function definition
double circumference_of_circle(double r, const double PI){
	return 2*PI*r;
}

double area_of_circle(double r, const double PI){
	return PI*(r*r);
}
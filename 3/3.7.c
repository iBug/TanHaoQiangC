// File: 3.7.c
// Author: iBug

#include <stdio.h>
#define PI 3.1416

int main(){
	float r, h;
	printf("Enter radius: ");
	scanf("%f", &r);
	printf("Enter height: ");
	scanf("%f", &h);
	printf("Circumference of circle: %.2f\n", 2 * PI * r);
	printf("Area of circle: %.2f\n", PI * r * r);
	printf("Area of sphere: %.2f\n", 4 * PI * r * r);
	printf("Volume of sphere: %.2f\n", 4/3 * PI * r * r * r);
	printf("Volume of cylinder: %.2f\n", PI * r * r * h);
	return 0;
}

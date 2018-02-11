// File: 3.2.c
// Author: TaoKY

#include <stdio.h>
#include <math.h>

int main(){
	int money = 1000;
	double y1 = 0.0414, y2 = 0.0468, y3 = 0.054, y5 = 0.0585;
	double dyn = 0.0072;
	printf("1. %lf\n", money * (1 + 5 * y5));
	printf("2. %lf\n", money * (1 + 2 * y2) * (1 + 3 * y3));
	printf("3. %lf\n", money * (1 + 3 * y3) * (1 + 2 * y2));
	printf("4. %lf\n", money * pow((1 + y1), 5));
	printf("5. %lf\n", money * pow((1 + dyn / 4), 4 * 5));
	return 0;
}

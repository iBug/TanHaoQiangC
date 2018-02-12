// File: 5.15.c
// Author: TaoKY

#include <stdio.h>

double f(double x){
	return 2 * x * x * x - 4 * x * x + 3 * x - 6;
	// this function is strictly increasing on (-10, 10).
}

int main(){
	double left = -10, right = 10;
	while ((right - left) / 2 >= 1e-5) {
		double middle = (left + right) / 2;
		if (f(middle) * f(left) < 0)
			right = middle;
		else
			left = middle;
	}
	printf("%lf\n", (left + right) / 2);
	return 0;
}

// File: 5.14.c
// Author: TaoKY

#include <stdio.h>
#include <math.h>

double det(double x){
	return 6 * x * x - 8 * x + 3;
}

double f(double x){
	return 2 * x * x * x - 4 * x * x + 3 * x - 6;
}

double nextx(double x){
	return x - f(x) / det(x);
}

int main(){
	double x0 = 1.5, x1 = nextx(x0);
	while (fabs(x0 - x1) >= 1e-5){
		x0 = x1;
		x1 = nextx(x0);
	}
	printf("%lf\n", x1);
	return 0;
}

// File: 7.12.c
// Author: TaoKY

#include <stdio.h>
#include <math.h>

double f(double x, double a, double b, double c, double d);
double det(double x, double a, double b, double c, double d);
double nextx(double x0, double a, double b, double c, double d);

int main(){
	double a, b, c, d;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	double x0 = 1, x1 = nextx(x0, a, b, c, d);
	while (fabs(x0 - x1) >= 1e-5){
		x0 = x1;
		x1 = nextx(x0, a, b, c, d);
	}
	printf("%lf\n", x1);
	return 0;
}

double f(double x, double a, double b, double c, double d){
	return a * x * x * x + b * x * x + c * x + d;
}

double det(double x, double a, double b, double c, double d){
	return 3 * a * x * x + 2 * b * x + c;
}

double nextx(double x0, double a, double b, double c, double d){
	return x0 - f(x0, a, b, c, d) / det(x0, a, b, c, d);
}

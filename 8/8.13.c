// File: 8.13.c
// Author: iBug

// This program must be compiled with:
//     gcc 8.13.c -o 8.13 -lm
//                        ^^^

#include <stdio.h>
#include <math.h>

double integral(double(*f)(double), double a, double b, double step){
	double s = 0.0, i;
	for (i = a + step*0.5; i < b; i += step)
		s += step * f(i);
	return s;
}

int main(){
	printf("%lf\n", integral(sin, 0, 1, 1.0e-4));
	printf("%lf\n", integral(cos, 0, 1, 1.0e-4));
	printf("%lf\n", integral(exp, 0, 1, 1.0e-4));
	return 0;
}

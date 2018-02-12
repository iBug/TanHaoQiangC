// File: 7.2.c
// Author: TaoKY

#include <stdio.h>
#include <math.h>
#include <complex.h>

void delta_gt0(double a, double b, double c);
void delta_eq0(double a, double b, double c);
void delta_lt0(double a, double b, double c);
// three doubi functions...

int main(){
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double delta = b * b - 4 * a * c;
	if (delta > 0)
		delta_gt0(a, b, c);
	else if (delta < 0)
		delta_lt0(a, b, c);
	else
		delta_eq0(a, b, c);
	return 0;
}

void delta_gt0(double a, double b, double c){
	double delta = b * b - 4 * a * c;
	printf("%lf %lf\n", (-b + sqrt(delta)) / (2 * a),
						(-b - sqrt(delta)) / (2 * a));
}

void delta_eq0(double a, double b, double c){
	printf("%lf\n", -b / (2 * a));
}

void delta_lt0(double a, double b, double c){
	double delta = b * b - 4 * a * c;
	double complex ans1 = -b / (2 * a) + csqrt(delta) / (2 * a);
	double complex ans2 = -b / (2 * a) - csqrt(delta) / (2 * a);
	printf("%f%+fi %f%+fi\n", creal(ans1), cimag(ans1), creal(ans2), cimag(ans2));
}

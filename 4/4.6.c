// File: 4.6.c
// Author: TaoKY

#include <stdio.h>

double fun(double x);

int main(){
	double x;
	scanf("%lf", &x);
	printf("%lf\n", fun(x));
	return 0;
}

double fun(double x){
	if (x < 1)
		return x;
	else if (x < 10)
		return 2 * x - 1;
	else
		return 3 * x - 11;
}

// File: 5.13.c
// Author: TaoKY

#include <stdio.h>
#include <math.h>

int main(){
	double a;
	scanf("%lf", &a);
	double first = a, second = 0.5 * (a + 1);
	while (fabs(second - first) >= 1e-5){
		first = second;
		second = 0.5 * (first + a / first);
	}
	printf("%lf\n", second);
	return 0;
}

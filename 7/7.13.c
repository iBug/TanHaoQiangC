// File: 7.13.c
// Author: TaoKY

#include <stdio.h>
#include <assert.h>

double P(int n, double x);

int main(){
	int n;
	double x;
	scanf("%d%lf", &n, &x);
	printf("%lf\n", P(n, x));
	return 0;
}

double P(int n, double x){
	if (n == 0) return 1;
	if (n == 1) return x;
	if (n > 1)
		return ((2 * n - 1) * x * P(n - 1, x) - (n - 1) * P(n - 2, x)) / n;
	// there is a printing error in Tan's book (maybe the latest version has fixed it)
	assert(0);
}

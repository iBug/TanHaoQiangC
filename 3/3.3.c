// File: 3.3.c
// Author: TaoKY

#include <stdio.h>
#include <math.h>

int main(){
	int d = 300000, p = 6000;
	double r = 0.01;
	printf("%.1lf\n", log10(p / (p - d * r)) / log10(1 + r));
	return 0;
}

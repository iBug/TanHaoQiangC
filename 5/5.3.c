// File: 5.3.c
// Author: iBug

#include <stdio.h>

int main(){
	int a, b, m, n, t, gcd, lcm;
	printf("Please give two numbers: ");
	scanf("%d%d", &a, &b);
	if (a < b){
		t = a;
		a = b;
		b = t;
	}
	m = a, n = b;
	while (n != 0){
		t = m % n;
		m = n;
		n = t;
	}
	gcd = m;
	lcm = a * b / gcd;
	printf("Their gcd is %d. Their lcm is %d.\n", gcd, lcm);
	return 0;
}

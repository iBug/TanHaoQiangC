// File: 7.1.c
// Author: iBug

#include <stdio.h>

int gcd(int m, int n){
	int t;
	if (m < n){
		t = m;
		m = n;
		n = t;
	}
	while (n != 0){
		t = m % n;
		m = n;
		n = t;
	}
	return m;
}

int lcm(int m, int n){
	return m * n / gcd(m, n);
}

int main(){
	int a, b;
	printf("Please give two numbers: ");
	scanf("%d%d", &a, &b);
	printf("Their gcd is %d. Their lcm is %d.\n", gcd(a, b), lcm(a, b));
	return 0;
}

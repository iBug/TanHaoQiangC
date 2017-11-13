// File: 5.6.c
// Author: iBug

#include <stdio.h>

int main(){
	int a[11] = {1}, b[11] = {0}, n, i;
	for (n = 0; n < 10; n ++){
		for (i = 0; i < n+1; i ++){
			printf("%3d ", a[i]);
			b[i] = a[i];
		}
		printf("\n");
		for (i = 1; i < n+2; i ++){
			a[i] = b[i-1] + b[i];
		}
	}
	return 0;
}

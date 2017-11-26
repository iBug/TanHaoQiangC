// File: 8.5.c
// Author: iBug

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *a, n, i, j, x;
	printf("Enter n: ");
	scanf("%d", &n);
	a = malloc(n * sizeof(*a));
	for (i = 0; i < n; i ++)
		a[i] = 1;
	x = n - 1;
	for (i = 0; i < n-1; i ++){
		for (j = 0; j < 3;){
			x = (x + 1) % n;
			if (a[x]) j ++;
		}
		a[x] = 0;
	}
	for (i = 0; i < n; i ++)
		if (a[i])
			printf("Number %d is left.\n", i + 1);
	free(a);
	return 0;
}

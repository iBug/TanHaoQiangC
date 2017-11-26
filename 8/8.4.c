// File: 8.4.c
// Author: iBug

#include <stdio.h>
#include <stdlib.h>

void shift(int* a, int n, int m){
	int *b = malloc(n * sizeof(*b)), i;
	for (i = 0; i < m; i ++)
		b[i] = a[n-m+i];
	for (i = m; i < n; i ++)
		b[i] = a[i-m];
	for (i = 0; i < n; i ++)
		a[i] = b[i];
	free(b);
}

int main(){
	int n, m, *a, i;
	printf("Enter array length: ");
	scanf("%d", &n);
	a = malloc(n * sizeof(*a));
	printf("Enter array: ");
	for (i = 0; i < n; i ++)
		scanf("%d", &a[i]);
	printf("Enter shift distance: ");
	scanf("%d", &m);
	shift(a, n, m);
	printf("The shifted array is: ");
	for (i = 0; i < n; i ++)
		printf("%d ", a[i]);
	printf("\n");
	free(a);
	return 0;
}

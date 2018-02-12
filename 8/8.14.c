// File: 8.14.c
// Author: TaoKY

#include <stdio.h>
#include <stdlib.h>

void reserve(int array[], int len);
void swap(int *x, int *y);

int main(){
	int n, *num;
	scanf("%d", &n);
	num = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	reserve(num, n);
	for (int i = 0; i < n; i++)
		printf("%d ", num[i]);
	puts("");
	return 0;
}

void reserve(int array[], int len){
	for (int i = 0; i < len - i - 1; i++){
		swap(&array[i], &array[len - i - 1]);
	}
}

void swap(int *x, int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

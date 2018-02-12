// File: 4.11.c
// Author: TaoKY

#include <stdio.h>
#include <stdlib.h>

#define NUM 4

int comp(const void *x, const void *y);

int main(){
	int num[NUM];
	for (int i = 0; i < NUM; i++){
		scanf("%d", &num[i]);
	}
	qsort(num, NUM, sizeof(int), comp);
	for (int i = 0; i < NUM; i++){
		printf("%d ", num[i]);
	}
	puts("");
	return 0;
}

int comp(const void *x, const void *y){
	return (*(int *)x - *(int *)y);
}

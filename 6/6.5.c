// File: 6.5.c
// Author: TaoKY

#include <stdio.h>
#define NUM 5

void swap(int *a, int *b);

int main(){
	int num[] = {8, 6, 5, 4, 1};
	for (int i = 0; i < NUM - i - 1; i++)
		swap(&num[i], &num[NUM - i - 1]);
	for (int i = 0; i < NUM; i++)
		printf("%d ", num[i]);
	puts("");
	return 0;
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

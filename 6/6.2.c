// File: 6.2.c
// Author: TaoKY

#include <stdio.h>
#define NUM 10

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int num[NUM] = {};
	for (int i = 0; i < NUM; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i < NUM; i++){
		int minPos = i;
		for (int j = i + 1; j < NUM; j++){
			if (num[j] < num[minPos])
				minPos = j;
		}
		swap(&num[minPos], &num[i]);
	}
	for (int i = 0; i < NUM; i++){
		printf("%d ", num[i]);
	}
	puts("");
	return 0;
}

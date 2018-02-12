// File: 8.10.c
// Author: TaoKY

#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

void writeMatrix(int [][5]);
int intcmp(const void*, const void*);
void swap(int *, int *);

int main(void) {
	int matrix[5][5] = {{0, }, };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	writeMatrix(matrix);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", matrix[i][j]);
		}
		puts("");
	}
	return 0;
}

int intcmp(const void* a, const void* b){
	return *(int*)a - *(int*)b;
}

void writeMatrix(int matrix[][5]) {
	// Assuming that matrix[5][5]
	// int max = 0, min[4] = {};
	// int tArray[5 * 5];
	int *p = matrix[0];
	// memcpy(tArray, matrix, sizeof tArray);
	qsort(p, 5 * 5, sizeof(*p), intcmp);
	swap(&matrix[0][1], &matrix[0][4]);
	swap(&matrix[0][2], &matrix[4][0]);
	swap(&matrix[0][3], &matrix[4][4]);
	swap(&matrix[0][3], &matrix[2][2]);
}

void swap(int *a, int *b) {
	int tmp = *a; *a = *b; *b = tmp;
}
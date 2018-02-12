// File: 7.11.c
// Author: TaoKY

#include <stdio.h>

void swap(char *x, char *y);
void bubbleSort(char array[], int len);

int main(){
	char chs[10];
	for (int i = 0; i < 10; i++)
		scanf("%c", &chs[i]);
	bubbleSort(chs, 10);
	for (int i = 0; i < 10; i++)
		printf("%c", chs[i]);
	puts("");
	return 0;
}

void bubbleSort(char array[], int len){
	for (int i = 0; i < len - 1; i++){
		for (int j = 0; j < len - i - 1; j++){
			if (array[j] > array[j + 1]){
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

void swap(char *x, char *y){
	char tmp = *x;
	*x = *y;
	*y = tmp;
}

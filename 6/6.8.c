// File: 6.8.c
// Author: iBug

#include <stdio.h>

int main(){
	int width, height, a[100][100];
	printf("Please enter the width and the height: ");
	scanf("%d%d", &width, &height);
	printf("Please give the array:\n");
	int i, j;
	for (j = 0; j < height; j ++){
		for (i = 0; i < width; i ++){
			scanf("%d", &a[j][i]);
		}
	}
	int m, n = 0, flag;
	for (j = 0; j < height; j ++){
		for (i = 0; i < width; i ++){
			flag = 1;
			for (m = 0; m < width; m ++){
				if (a[j][m] > a[j][i]){
					flag = 0;
					break;
				}
			}
			for (m = 0; m < height; m ++){
				if (a[m][i] < a[j][i]){
					flag = 0;
					break;
				}
			}
			if (flag == 1){
				n ++;
				printf("a[%d][%d]=%d is a saddle point.\n", j, i, a[j][i]);
			}
		}
	}
	if (n == 0){
		printf("No saddle points were found.\n");
	}
	return 0;
}

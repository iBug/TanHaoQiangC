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
			scanf("%d", &a[i][j]);
		}
	}
	int m, n = 0, flag;
	for (j = 0; j < height; j ++){
		for (i = 0; i < width; i ++){
			flag = 1;
			for (m = 0; m < width; m ++){
				if (a[m][j] < a[i][j]){
					flag = 0;
					break;
				}
			}
			for (m = 0; m < height; m ++){
				if (a[i][m] > a[i][j]){
					flag = 0;
					break;
				}
			}
			if (flag == 1){
				n ++;
				printf("a[%d][%d] is an An point.\n", i, j);
			}
		}
	}
	if (n == 0){
		printf("No An points were found.\n");
	}
	return 0;
}

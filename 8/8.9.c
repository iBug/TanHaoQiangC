// File: 8.9.c
// Author: iBug

#include <stdio.h>

void mirror(int (*a)[3][3]){
	int t;
	t = (*a)[0][1];
	(*a)[0][1] = (*a)[1][0];
	(*a)[1][0] = t;
	t = (*a)[0][2];
	(*a)[0][2] = (*a)[2][0];
	(*a)[2][0] = t;
	t = (*a)[1][2];
	(*a)[1][2] = (*a)[2][1];
	(*a)[2][1] = t;
}

int main(){
	printf("Please enter a 3x3 matrix:\n");
	int a[3][3], i, j;
	for (i = 0; i < 3; i ++)
		for (j = 0; j < 3; j ++)
			scanf("%d", &a[i][j]);
	mirror(&a);
	printf("The mirrored matrix is:\n");
	for (i = 0; i < 3; i ++){
		for (j = 0; j < 3; j ++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}

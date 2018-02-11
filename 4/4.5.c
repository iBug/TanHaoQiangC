// File: 4.5.c
// Author: TaoKY

#include <stdio.h>
#include <math.h>

int main(){
	int x = -1;
	do {
		printf("Input: ");
		scanf("%d", &x);
	} while (x <= 0 || x >= 1000);
	printf("%d\n", (int)sqrt(x));
	return 0;
}

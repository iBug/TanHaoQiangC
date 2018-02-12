// File: 5.11.c
// Author: TaoKY

#include <stdio.h>

int main(){
	double height = 100, length = 100;
	for (int i = 0; i < 10; i++){
		i != 0? length += height * 2 : 0;
		height /= 2;
	}
	printf("%lf, %lf\n", length, height);
	return 0;
}

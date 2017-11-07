// File: 3.1.c
// Author: iBug

#include <stdio.h>

int main(){
	float p = 1.0f, r = 0.09f;
	int n = 10, i;
	for (i = 0; i < n; i ++){
		p = p * (1 + r);
	}
	printf("%f\n", p-1);
	return 0;
}

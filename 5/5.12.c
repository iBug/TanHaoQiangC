// File: 5.12.c
// Author: iBug

#include <stdio.h>

int main(){
	int n = 1, d;
	for (d = 1; d < 10; d ++){
		n = (n + 1) * 2;
	}
	printf("%d\n", n);
	return 0;
}

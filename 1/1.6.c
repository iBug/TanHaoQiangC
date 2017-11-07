// File: 1.6.c

#include <stdio.h>

int main(){
	int a, b, c, max;
	scanf("%d%d%d", &a, &b, &c);
	max = a;
	if (b > max){
		max = b;
	}
	if (c > max){
		max = c;
	}
	printf("The maximum is %d\n", max);
	return 0;
}

// File: 7.17.c
// Author: TaoKY

#include <stdio.h>

void convert(int n);

int main(){
	int n;
	scanf("%d", &n);
	convert(n);
	puts("");
	return 0;
}

void convert(int n){
	if (n < 0){
		putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		convert(n / 10);
	printf("%d", n % 10);
}

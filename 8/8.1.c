// File: 8.1.c
// Author: iBug

#include <stdio.h>

int main(){
	int a, b, c, *p1, *p2, *p3, *p;
	p1 = &a, p2 = &b, p3 = &c;
	printf("Please give three numbers: ");
	scanf("%d%d%d", p1, p2, p3);
	if (*p1 > *p2){
		p = p1;
		p1 = p2;
		p2 = p;
	}
	if (*p2 > *p3){
		p = p2;
		p2 = p3;
		p3 = p;
	}
	if (*p1 > *p2){
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("%d %d %d\n", *p1, *p2, *p3);
	return 0;
}

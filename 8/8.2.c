// File: 8.2.c
// Author: iBug

#include <stdio.h>
#include <string.h>
#define LEN 100

int main(){
	char a[LEN], b[LEN], c[LEN], *p1, *p2, *p3, *p;
	p1 = a, p2 = b, p3 = c;
	printf("Please give three strings: ");
	scanf("%s%s%s", p1, p2, p3);
	if (strcmp(p1, p2) > 0){
		p = p1;
		p1 = p2;
		p2 = p;
	}
	if (strcmp(p2, p3) > 0){
		p = p2;
		p2 = p3;
		p3 = p;
	}
	if (strcmp(p1, p2) > 0){
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("%s\n%s\n%s\n", p1, p2, p3);
	return 0;
}

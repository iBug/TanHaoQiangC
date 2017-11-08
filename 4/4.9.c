// File: 4.9.c
// Author: iBug

#include <stdio.h>

int main(){
	int n, a, b, c, d, e, s, t;
	printf("Enter a number: ");
	scanf("%d", &n);
	t = n, s = 0;
	while (t > 0){
		t = t / 10;
		s ++;
	}
	a = (n/10000) % 10;
	b = (n/1000) % 10;
	c = (n/100) % 10;
	d = (n/10) % 10;
	e = (n/1) % 10;
	switch (s){
		case 1:
			printf("n is a %d-digit number.\n", s);
			printf("Each of its digits: %d\n", e);
			printf("Each of its digits in reverse order: %d\n", e);
			break;
		case 2:
			printf("n is a %d-digit number.\n", s);
			printf("Each of its digits: %d %d\n", d, e);
			printf("Each of its digits in reverse order: %d %d\n", e, d);
			break;
		case 3:
			printf("n is a %d-digit number.\n", s);
			printf("Each of its digits: %d %d %d\n", c, d, e);
			printf("Each of its digits in reverse order: %d %d %d\n", e, d, c);
			break;
		case 4:
			printf("n is a %d-digit number.\n", s);
			printf("Each of its digits: %d %d %d %d\n", b, c, d, e);
			printf("Each of its digits in reverse order: %d %d %d %d\n", e, d, c, b);
			break;
		case 5:
			printf("n is a %d-digit number.\n", s);
			printf("Each of its digits: %d %d %d %d %d\n", a, b, c, d, e);
			printf("Each of its digits in reverse order: %d %d %d %d %d\n", e, d, c, b, a);
			break;
		default:
			printf("Bad number.\n");
			break;
	}
	return 0;
}

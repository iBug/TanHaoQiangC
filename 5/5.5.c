// File: 5.5.c
// Author: iBug

#include <stdio.h>

int main(){
	int a = 2, n, s, t, i, j;
	scanf("%d", &n);
	s = 0;
	for (i = 1; i <= n; i ++){
		t = a;
		for (j = 0; j < i; j ++){
			s += t;
			t *= 10;
		}
	}
	printf("%d\n", s);
	return 0;
}

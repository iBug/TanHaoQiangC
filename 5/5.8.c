// File: 5.8.c
// Author: iBug

#include <stdio.h>

int main(){
	int i, a, b, c;
	for (i = 100; i < 1000; i ++){
		a = (i / 100) % 10;
		b = (i / 10) % 10;
		c = (i / 1) % 10;
		if (i == a*a*a + b*b*b + c*c*c){
			printf("%d\n",i);
		}
	}
	return 0;
}

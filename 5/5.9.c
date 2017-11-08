// File: 5.9.c
// Author: iBug

#include <stdio.h>

int main(){
	int n, s, i;
	for (n = 1; n < 1000; n ++){
		s = 0;
		for (i = 1; i < n; i ++){
			if (n % i == 0){
				s += i;
			}
		}
		if (s == n){
			printf("%d\tits factors are 1", n);
			for (i = 2; i < n; i ++){
				if (n % i == 0){
					printf(", %d", i);
				}
			}
			printf("\n");
		}
	}
	return 0;
}

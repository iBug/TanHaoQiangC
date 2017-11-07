// File: 6.1.c
// Author: iBug

#include <stdio.h>

int main(){
	int isprime[101] = {}, i, j;
	for (i = 2; i <= 100; i ++){
		isprime[i] = 1;
	}
	for (i = 2; i <= 100; i ++){
		if (isprime[i] == 1){
			for (j = i*2; j <= 100; j += i){
				isprime[j] = 0;
			}
		}
	}
	for (i = 2; i <= 100; i ++){
		if (isprime[i] == 1){
			printf("%d ", i);
		}
	}
	return 0;
}

// File: 7.3.c
// Author: iBug

#include <stdio.h>

int isPrime(int n){
	int i;
	for (i = 2; i*i <= n; i ++){
		if (n % i == 0)
			return 0;
	}
	return n;
}

int main(){
	int n;
	printf("Please give a number: ");
	scanf("%d", &n);
	if (isPrime(n)){
		printf("%d is a prime number.\n", n);
	}
	else{
		printf("%d is not a prime number.\n", n);
	}
	return 0;
}

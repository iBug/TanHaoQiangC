// File: 5.6.c
// Author: TaoKY

#include <stdio.h>

long long fact(int x);

int main(){
	long long sum = 0;
	for (int i = 1; i <= 20; i++){
		sum += fact(i);
	}
	printf("%lld\n", sum);
	return 0;
}

long long fact(int x){
	long long res = 1;
	for (int i = 1; i <= x; i++)
		res *= i;
	return res;
}

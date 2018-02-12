// File: 7.8.c
// Author: TaoKY

#include <stdio.h>

void splitNum(int num);

int main(){
	int num;
	scanf("%d", &num);
	splitNum(num);
	return 0;
}

void splitNum(int num){
	int k = 1000;
	for (int i = 0; i < 4; i++){
		printf("%d ", num / k);
		num %= k;
		k /= 10;
	}
	puts("");
}

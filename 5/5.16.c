// File: 5.16.c
// Author: TaoKY

#include <stdio.h>
#include <stdlib.h>

void printChar(char c, int x);

int main(){
	for (int i = 3; i >= -3; i--){
		printChar(' ', abs(i));
		printChar('*', (3 - abs(i)) * 2 + 1);
		puts("");
	}
	return 0;
}

void printChar(char c, int x){
	for (int i = 0; i < x; i++)
		putchar(c);
}

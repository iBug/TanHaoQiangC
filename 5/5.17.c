// File: 5.17.c
// Author: iBug

#include <stdio.h>

int main(){
	char a, b, c;
	for (a = 'X'; a <= 'Z'; a ++){
		for (b = 'X'; b <= 'Z'; b ++){
			for (c = 'X'; c <= 'Z'; c ++){
				if ((a != b && b != c && c != a) &&
					(a != 'X' && c != 'X' && c != 'Z')){
					printf("A <-> %c\n", a);
					printf("B <-> %c\n", b);
					printf("C <-> %c\n", c);
				}
			}
		}
	}
	return 0;
}

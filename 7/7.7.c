// File: 7.7.c
// Author: iBug

#include <stdio.h>

int vowelCopy(char *dest, const char *src){
	int n = 0, m;
	for (m = 0; src[m] != '\0'; m ++){
		switch (src[m]){
			case 'A': case 'E': case 'I': case 'O': case 'U':
			case 'a': case 'e': case 'i': case 'o': case 'u':
				dest[n] = src[m];
				n ++;
				break;
		}
	}
	dest[n] = '\0';
	return n;
}

int main(){
	char s[100], t[100];
	printf("Please give a string: ");
	gets(s);
	vowelCopy(t, s);
	printf("Output: %s\n", t);
	return 0;
}

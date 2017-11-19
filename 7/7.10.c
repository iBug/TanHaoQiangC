// File: 7.10.c
// Author: iBug

#include <stdio.h>

int longestWord(char* dest, const char* src){
	int i, start, m, len;
	start = m = len = 0;
	for (i = 0;; i ++){
		if (src[i] == ' ' || src[i] == '\0'){
			if (i - start > len){
				len = i - start;
				m = start;
			}
			if (src[i] == '\0')
				break;
			start = i+1;
		}
	}
	for (i = 0; i < len; i ++)
		dest[i] = src[m + i];
	dest[len] = '\0';
	return len;
}

int main(){
	char s[100], t[50];
	printf("Please give a line:\n");
	gets(s);
	longestWord(t, s);
	printf("The longest word is %s.\n", t);
	return 0;
}

// File: 7.6.c
// Author: iBug

#include <stdio.h>

char* string_cat(char* dest, const char* src){
	char *ret = dest;
	while (*dest != '\0'){
		dest ++;
	}
	while (*src != '\0'){
		*dest++ = *src++;
	}
	*dest = '\0';
	return ret;
}

int main(){
	char s[100], t[200];
	gets(t);
	gets(s);
	string_cat(t, s);
	puts(t);
	return 0;
}

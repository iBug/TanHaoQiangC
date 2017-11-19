// File: 7.5.c
// Author: iBug

#include <stdio.h>
#include <string.h>

char* reverse(char* s){
	int len = strlen(s), i;
	char t;
	for (i = 0; i < len/2; i ++){
		t = s[i];
		s[i] = s[len-1-i];
		s[len-1-i] = t;
	}
	return s;
}

int main(){
	char s[100];
	printf("Please give a string: ");
	gets(s);
	printf("The reversed string: %s\n", reverse(s));
	return 0;
}

// File: 8.6.c
// Author: iBug

#include <stdio.h>

int len(const char* s){
	const char *t = s;
	while (*t != '\0')
		t ++;
	return t - s;
}

int main(){
	char str[100];
	printf("Please give a string:\n");
	gets(str);
	printf("Length = %d\n", len(str));
	return 0;
}

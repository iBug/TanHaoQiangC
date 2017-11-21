// File: 8.7.c
// Author: iBug

#include <stdio.h>
#include <string.h>

int strstrcpy(char* dest, const char* src, int m){
	int n = strlen(src), i;
	if (m >= n){
		dest[0] = '\0';
		return 0;
	}
	for (i = m; i <= n; i++)
		dest[i-m] = src[i];
	return n-m;
}

int main(){
	char a[100], b[100];
	int m;
	printf("Please give a string: ");
	gets(a);
	printf("Number: ");
	scanf("%d", &m);
	strstrcpy(b, a, m);
	printf("The copied string: %s\n", b);
	return 0;
}

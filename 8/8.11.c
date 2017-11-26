// File: 8.11.c
// Author: iBug

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRINGS 10

void sortString(char* s, int n){
	char (*p)[n] = (char(*)[n]) s, t[n];
	int i, j;
	for (i = STRINGS - 1; i > 0; i --)
		for (j = 0; j < i; j ++)
			if (strcmp(p[j], p[j+1]) > 0){
				strcpy(t, p[j]);
				strcpy(p[j], p[j+1]);
				strcpy(p[j+1], t);
			}
}

int main(){
	int n, i;
	char *s;
	printf("Enter string length: ");
	scanf("%d", &n);
	while (getchar() != '\n');
	s = malloc(n * STRINGS * sizeof(*s));
	for (i = 0; i < STRINGS; i ++){
		printf("Enter string %d: ", i + 1);
		gets(s + i*n);
	}
	sortString(s, n);
	printf("Sorted: \n");
	for (i = 0; i < STRINGS; i ++){
		printf("%s\n", s + i*n);
	}
	free(s);
	return 0;
}

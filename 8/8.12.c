// File: 8.12.c
// Author: iBug

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 1000
#define STRINGS 10

void sortString(char** p){
	char t[MAXN];
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
	int i;
	char t[MAXN], **s;
	s = malloc(STRINGS * sizeof(*s));
	for (i = 0; i < STRINGS; i ++){
		printf("Enter string %d: ", i + 1);
		gets(t);
		s[i] = malloc((strlen(t)+1) * sizeof(*s[i]));
		strcpy(s[i], t);
	}
	sortString(s);
	printf("Sorted: \n");
	for (i = 0; i < STRINGS; i ++)
		printf("%s\n", s[i]);
	for (i = 0; i < STRINGS; i ++)
		free(s[i]);
	free(s);
	return 0;
}

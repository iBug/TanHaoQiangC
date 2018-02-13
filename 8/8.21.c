// File: 8.21.c
// Author: TaoKY (copied from @iBug & modified)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 1000

void sortString(char** p, int n){
	char t[MAXN];
	int i, j;
	for (i = n - 1; i > 0; i --)
		for (j = 0; j < i; j ++)
			if (strcmp(p[j], p[j+1]) > 0){
				strcpy(t, p[j]);
				strcpy(p[j], p[j+1]);
				strcpy(p[j+1], t);
			}
}

int main(){
	int i;
	int n;
	char t[MAXN], **s;
	scanf("%d", &n);
	s = malloc(n * sizeof(*s));
	for (i = 0; i < n; i ++){
		printf("Enter string %d: ", i + 1);
		gets(t); // too lazy...
		s[i] = malloc((strlen(t)+1) * sizeof(*s[i]));
		strcpy(s[i], t);
	}
	sortString(s, n);
	printf("Sorted: \n");
	for (i = 0; i < n; i ++)
		printf("%s\n", s[i]);
	for (i = 0; i < n; i ++)
		free(s[i]);
	free(s);
	return 0;
}

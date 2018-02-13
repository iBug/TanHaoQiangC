// File: 8.16.c
// Author: TaoKY

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	int c;
	int *a = malloc(0), cnt = 0;
	int num = 0;
	bool got = false;
	while ((c = getchar()) != EOF || (c == EOF && got)){
		if (isdigit(c)){
			got = true;
			num = num * 10 + c - '0';
			continue;
		}
		if (got){
			a = realloc(a, ++cnt * sizeof(int));
			a[cnt - 1] = num;
			num = 0;
			got = false;
			if (c == EOF)
				break;
		}
	}
	for (int i = 0; i < cnt; i++)
		printf("%d ", a[i]);
	puts("");
	return 0;
}

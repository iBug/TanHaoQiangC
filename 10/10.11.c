// File: 10.11.c
// Author: TaoKY

#include <stdio.h>
#include <ctype.h>

int main(){
	int c;
	FILE *f = fopen("out", "w");
	if (!f){
		perror("fopen() error");
		exit(-1);
	}

	while ((c = getchar()) != EOF)
		fputc(c, f);
	fclose(f);
	f = fopen("out", "r");
	if (!f){
		perror("fopen() error");
		exit(-1);
	}
	while ((c = getc(f)) != EOF)
		putchar(toupper(c));
	fclose(f);
	return 0;
}

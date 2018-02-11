// File: 10.4.c
// Author: TaoKY

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getFileSize(FILE *);

int main(){
	char *str[2];
	FILE *fa = fopen("A", "r"); // input 1
	FILE *fb = fopen("B", "r"); // input 2
	FILE *fc = fopen("C", "w"); // output
	if (!fa || !fb || !fc){
		perror("fopen() error");
		exit(-1);
	}
	str[0] = malloc(getFileSize(fa));
	str[1] = malloc(getFileSize(fb));
	fscanf(fa, "%s", str[0]);
	fscanf(fb, "%s", str[1]);
	if (strcmp(str[0], str[1]) > 0) // str[0] 'greater than' str[1]
		fprintf(fc, "%s\n%s\n", str[1], str[0]);
	else
		fprintf(fc, "%s\n%s\n", str[0], str[1]);
	fclose(fa);
	fclose(fb);
	fclose(fc);
	return 0;
}

int getFileSize(FILE *f){
	fseek(f, 0, SEEK_END);
	int size = ftell(f);
	fseek(f, 0, SEEK_SET);
	return size;
}
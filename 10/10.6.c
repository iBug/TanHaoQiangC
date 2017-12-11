// File: 10.6.c
// Author: iBug

#include <stdio.h>
#include <stdlib.h>
#define FILENAME5 "stud"
#define FILENAME6 "stu_sort"
#define STUDENTS 5
#define NAMELEN 12
#define SCORES 3

typedef struct _Student {
	int number;
	char name[NAMELEN];
	double score[SCORES];
	double average;
} Student;

int main(){
	FILE *fp;
	Student *stu = malloc(STUDENTS * sizeof *stu);
	fp = fopen(FILENAME5, "r");
	if (fp == NULL){
		fprintf(stderr, "Error opening file \"%s\".\n", FILENAME5);
		free(stu);
		return 1;
	}
	int i, j;
	for (i = 0; i < STUDENTS; i++){
		fscanf(fp, "%d%s", &stu[i].number, stu[i].name);
		for (j = 0; j < SCORES; j++)
			fscanf(fp, "%lf", &stu[i].score[j]);
		fscanf(fp, "%lf", &stu[i].average);
	}
	fclose(fp);
	
	for (i = STUDENTS - 1; i > 0; i--){
		for (j = 0; j < i; j++){
			if (stu[j].average > stu[j+1].average){
				// Actually you can do this :)
				Student t = stu[j];
				stu[j] = stu[j+1];
				stu[j+1] = t;
			}
		}
	}

	fp = fopen(FILENAME6, "w");
	if (fp == NULL){
		fprintf(stderr, "Error opening file \"%s\".\n", FILENAME6);
		free(stu);
		return 1;
	}
	for (i = 0; i < STUDENTS; i++){
		fprintf(fp, "%d %s ", stu[i].number, stu[i].name);
		for (j = 0; j < SCORES; j++)
			fprintf(fp, "%lf ", stu[i].score[j]);
		fprintf(fp, "%lf\n", stu[i].average);
	}
	fclose(fp);
	free(stu);
	return 0;
}

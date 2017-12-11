// File: 10.5.c
// Author: iBug

#include <stdio.h>
#include <stdlib.h>
#define FILENAME5 "stud"
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
	Student *stu = malloc(STUDENTS * sizeof *stu);
	int i, j;
	for (i = 0; i < STUDENTS; i++){
		printf("Please enter student %d: ", i + 1);
		scanf("%d%s", &stu[i].number, stu[i].name);
		for (j = 0; j < SCORES; j++)
			scanf("%lf", &stu[i].score[j]);
	}

	for (i = 0; i < STUDENTS; i++){
		double sum = 0.0;
		for (j = 0; j < SCORES; j++)
			sum += stu[i].score[j];
		stu[i].average = sum / SCORES;
	}

	FILE *fp = fopen(FILENAME5, "w");
	if (fp == NULL){
		fprintf(stderr, "Error opening file \"%s\".\n", FILENAME5);
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

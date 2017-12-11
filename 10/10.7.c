// File: 10.7.c
// Author: iBug

#include <stdio.h>
#include <stdlib.h>
#define FILENAME5 "stud"
#define FILENAME6 "stu_sort"
#define FILENAME7 "stu_sort_new"
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
	Student *stu = malloc((STUDENTS + 1) * sizeof *stu);
	fp = fopen(FILENAME6, "r");
	if (fp == NULL){
		fprintf(stderr, "Error opening file \"%s\".\n", FILENAME6);
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
	
	i = STUDENTS;
	printf("Enter new student: ");
	scanf("%d%s", &stu[i].number, stu[i].name);
	double sum = 0.0;
	for (j = 0; j < SCORES; j++){
		scanf("%lf", &stu[i].score[j]);
		sum += stu[i].score[j];
	}
	stu[i].average = sum / SCORES;

	Student t;
	while (i > 0 && stu[i-1].average > stu[i].average){
		t = stu[i];
		stu[i] = stu[i-1];
		stu[i-1] = t;
		i--;
	}
	
	fp = fopen(FILENAME7, "w");
	if (fp == NULL){
		fprintf(stderr, "Error opening file \"%s\".\n", FILENAME7);
		free(stu);
		return 1;
	}
	for (i = 0; i < STUDENTS + 1; i++){
		fprintf(fp, "%d %s ", stu[i].number, stu[i].name);
		for (j = 0; j < SCORES; j++)
			fprintf(fp, "%lf ", stu[i].score[j]);
		fprintf(fp, "%lf\n", stu[i].average);
	}
	fclose(fp);
	free(stu);
	return 0;
}

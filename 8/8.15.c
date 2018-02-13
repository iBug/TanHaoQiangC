// File: 8.15.c
// Author: TaoKY

#include <stdio.h>
#include <stdbool.h>
#define STUD 4
#define COUR 5

void fun1(int scores[][COUR]);
void fun2(int scores[][COUR]);
void fun3(int scores[][COUR]);

int main(){
	int scores[STUD][COUR];
	for (int i = 0; i < STUD; i++)
		for (int j = 0; j < COUR; j++)
			scanf("%d", &scores[i][j]);
	fun1(scores);
	fun2(scores);
	fun3(scores);
	return 0;
}

void fun1(int scores[][COUR]){
	double average = 0;
	for (int i = 0; i < STUD; i++)
		average += scores[i][0];
	average /= STUD;
	printf("%lf\n", average);
}

void fun2(int scores[][COUR]){
	for (int i = 0; i < STUD; i++){
		int failCnt = 0;
		for (int j = 0; j < COUR; j++){
			if (scores[i][j] < 60)
				failCnt++;
		}
		if (failCnt > 2){
			printf("%d: ", i);
			double average = 0;
			for (int j = 0; j < COUR; j++){
				printf("%d ", scores[i][j]);
				average += scores[i][j];
			}
			average /= COUR;
			printf("\nAverage: %lf\n", average);
		}
	}
}

void fun3(int scores[][COUR]){
	for (int i = 0; i < STUD; i++){
		bool isAllCourseGt85 = true;
		double average = 0;
		for (int j = 0; j < COUR; j++){
			if (scores[i][j] <= 85)
				isAllCourseGt85 = false;
			average += scores[i][j];
		}
		average /= COUR;
		if (average > 90 || isAllCourseGt85)
			printf("%d\n", i);
	}
}

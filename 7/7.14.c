// File: 7.14.c
// Author: iBug

#include <stdio.h>
#define STUDENTS 10
#define COURSES 5

double score[STUDENTS][COURSES];
int maxStudent, maxCourse;

double averageStudent(int student){
	double sum = 0.0;
	int i;
	for (i = 0; i < COURSES; i ++)
		sum += score[student][i];
	return sum / COURSES;
}

double averageCourse(int course){
	double sum = 0.0;
	int i;
	for (i = 0; i < STUDENTS; i ++)
		sum += score[i][course];
	return sum / STUDENTS;
}

void findMax(void){
	int maxs = 0, maxc = 0, s, c;
	for (s = 0; s < STUDENTS; s ++)
		for (c = 0; c < COURSES; c ++)
			if (score[s][c] > score[maxs][maxc])
				maxs = s, maxc = c;
	maxStudent = maxs;
	maxCourse = maxc;
}

double deviationCourse(int course){
	double sum = 0.0, squareSum = 0.0;
	int i;
	for (i = 0; i < STUDENTS; i ++){
		sum += score[i][course];
		squareSum += score[i][course] * score[i][course];
	}
	return squareSum / STUDENTS - sum*sum / (STUDENTS * STUDENTS);
}

double deviationAll(void){
	double sum = 0.0, squareSum = 0.0, t;
	int i;
	for (i = 0; i < STUDENTS; i ++){
		t = averageStudent(i);
		sum += t;
		squareSum += t*t;
	}
	return squareSum / STUDENTS - sum*sum / (STUDENTS * STUDENTS);
}

int main(){
	int s, c;
	for (s = 0; s < STUDENTS; s ++){
		printf("Enter scores for student %d: ", s+1);
		for (c = 0; c < COURSES; c ++){
			scanf("%lf", &score[s][c]);
		}
	}
	printf("\n");
	for (s = 0; s < STUDENTS; s ++)
		printf("Average score of student %d is %.2lf\n", s+1, averageStudent(s));
	printf("\n");
	for (c = 0; c < COURSES; c ++)
		printf("Average score of course %d is %.2lf\n", c+1, averageCourse(c));
	printf("\n");
	findMax();
	printf("The highest score %.2lf is from Student %d, Course %d.\n",
		score[maxStudent][maxCourse], maxStudent+1, maxCourse+1);
	for (c = 0; c < COURSES; c ++)
		printf("Square deviation of course %d is %.2lf\n", c+1, deviationCourse(c));
	printf("Square deviation of all is %.2lf\n", deviationAll());
	return 0;
}

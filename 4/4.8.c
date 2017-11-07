// File: 4.8.c
// Author: iBug

#include <stdio.h>

int main(){
	int score;
	char grade;
	scanf("%d", &score);
	if (score<0 || score>100){
		grade = 0;
	}
	else if (score >= 90){
		grade = 'A';
	}
	else if (score >= 80){
		grade = 'B';
	}
	else if (score >= 70){
		grade = 'C';
	}
	else if (score >= 60){
		grade = 'D';
	}
	else{
		grade = 'E';
	}
	
	if (grade == 0){
		printf("Error!\n");
	}
	else{
		printf("The grade is %c.\n", grade);
	}
	return 0;
}

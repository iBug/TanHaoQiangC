// File: 7.18.c
// Author: iBug

#include <stdio.h>

int monthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int yearDays(int y, int m, int d){
	int la = 0;
	if (y % 400 == 0){
		la = 1;
	}
	else if (y % 4 == 0 && y % 100 != 0){
		la = 1;
	}
	monthDays[2] = 28 + la;
	int i, day = 0;
	for (i = 1; i < m; i ++){
		day += monthDays[i];
	}
	day += d;
	return day;
}

int main(){
	int y, m, d;
	printf("Enter year, month and day: ");
	scanf("%d%d%d", &y, &m, &d);
	printf("It's the %d-th day in the year.\n", yearDays(y, m, d));
	return 0;
}

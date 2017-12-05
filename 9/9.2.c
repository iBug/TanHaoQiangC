// File: 9.2.c
// Author: iBug

#include <stdio.h>

struct _9_2{
	int year;
	int month;
	int day;
};

int yearDay(struct _9_2 date){
	static int Days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (date.year%400 == 0 || (date.year%4 == 0 && date.year%100 != 0)) {
		Days[2] = 29;
	}
	else {
		Days[2] = 28;
	}
	int i, days = 0;
	for (i = 1; i < date.month; i++)
		days += Days[i];
	days += date.day;
	return days;
}

int main(){
	struct _9_2 date;
	printf("Please give date: ");
	scanf("%d%d%d", &date.year, &date.month, &date.day);
	printf("It's day #%d in the year.\n", yearDay(date));
	return 0;
}

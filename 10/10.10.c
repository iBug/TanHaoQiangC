// File: 10.10.c
// Author: TaoKY

#include <stdio.h>
#include <stdlib.h>

#define NAMELEN 20
#define ADDRLEN 100
#define HEALLEN 100
#define EDUCLEN 100
#define MAXLINE 1000

struct employee_t {
	char name[NAMELEN];
	int id;
	int sex; // 0: Male, 1: Female
	int age;
	char address[ADDRLEN];
	int salary;
	char health[HEALLEN];
	char education[EDUCLEN];
} employee[MAXLINE];

int main(){
	FILE *f = fopen("employee", "r");
	if (!f){
		perror("fopen() error");
		exit(-1);
	}

	int i = 0;
	while (fscanf(f, "%s%d%d%d%s%d%s%s", employee[i].name, &employee[i].id, &employee[i].sex, &employee[i].age, 
											employee[i].address, &employee[i].salary, employee[i].health, employee[i].education) != EOF)
											i++;
	fclose(f);
	f = fopen("employee", "w");
	if (!f){
		perror("fopen() error");
		exit(-1);
	}

	i--; // delete the last one
	for (int j = 0; j < i; j++)
		fprintf(f, "%s %d %d %d %s %d %s %s\n", employee[j].name, employee[j].id, employee[j].sex, employee[j].age, 
											employee[j].address, employee[j].salary, employee[j].health, employee[j].education);
	fclose(f);
	return 0;
}

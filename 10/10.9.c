// File: 10.9.c
// Author: TaoKY

#include <stdio.h>
#include <stdlib.h>

#define NAMELEN 20
#define ADDRLEN 100
#define HEALLEN 100
#define EDUCLEN 100

// struct employee_t {
// 	char name[NAMELEN];
// 	int id;
// 	int sex; // 0: Male, 1: Female
// 	int age;
// 	char address[ADDRLEN];
// 	int salary;
// 	char health[HEALLEN];
// 	char education[EDUCLEN];
// } employee;

int main(){
	FILE *fin = fopen("employee", "r");
	FILE *fout = fopen("simple_employee", "w");
	if (!fin || !fout){
		perror("fopen() error");
		exit(-1);
	}

	char name[NAMELEN]; 
	int salary;
	while (fscanf(fin, "%s%*d%*d%*d%*s%d%*s%*s", name, &salary) != EOF)
		fprintf(fout, "%s %d\n", name, salary);
	fclose(fin);
	fclose(fout);
	return 0;
}

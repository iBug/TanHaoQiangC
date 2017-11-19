// File: 7.15.c
// Author: iBug

#include <stdio.h>
#include <string.h>
#define STAFFS 10
#define NAMELEN 20

int number[STAFFS];
char name[STAFFS][NAMELEN];

void inputStaffs(void){
	int i;
	for (i = 0; i < STAFFS; i ++){
		printf("Please enter the number of staff %d: ", i+1);
		scanf("%d", &number[i]);
		printf("Please enter the name of staff %d: ", i+1);
		scanf("%s", name[i]);
	}
}

void sortStaffs(void){
	int i, j, t;
	char buf[NAMELEN];
	for (i = STAFFS; i > 0; i --){
		for (j = 0; j < i - 1; j ++){
			if (number[j] > number[j+1]){
				t = number[j];
				number[j] = number[j+1];
				number[j+1] = t;
				strcpy(buf, name[j]);
				strcpy(name[j], name[j+1]);
				strcpy(name[j+1], buf);
			}
		}
	}
}

int findStaff(int n){
	int i = 0, j = STAFFS;
	while (i < j-1){
		if (number[(i+j)/2] == n){
			return (i+j)/2;
		}
		else if (number[(i+j)/2] > n){
			j = (i+j)/2;
		}
		else{
			i = (i+j)/2;
		}
	}
	if (number[i] == n)
		return i;
	return -1; // Not found
}

int main(){
	inputStaffs();
	sortStaffs();
	int f, n;
	printf("Please enter the number: ");
	scanf("%d", &n);
	f = findStaff(n);
	if (f == -1){
		printf("That staff doesn't exist.\n");
	}
	else{
		printf("The name is %s.\n", name[f]);
	}
	return 0;
}

// File: 8.18.c
// Author: iBug

#include <stdio.h>

const char *Month[12] = {
	"January", "February", "March", "April",
	"May", "June", "July", "August",
	"September", "October", "November", "December"
};

const char* getMonth(int m){
	if (m <= 0 || m > 12) return NULL;
	return Month[m - 1];
}

int main(){
	int a = 0;
	const char *s;
	printf("Enter month number: ");
	scanf("%d", &a);
	s = getMonth(a);
	if (s == NULL){
		printf("Invalid month!\n");
	}
	else{
		printf("It's %s.\n", s);
	}
	return 0;
}

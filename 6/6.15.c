// File: 6.15.c
// Author: iBug

#include <stdio.h>

int main(){
	char s1[100], s2[100];
	printf("Please give a string: ");
	scanf("%s", s2);
	int i = 0;
	while (s2[i] != '\0'){
		s1[i] = s2[i];
		i ++;
	}
	s1[i] = '\0';
	printf("The copied string is %s\n", s1);
	return 0;
}

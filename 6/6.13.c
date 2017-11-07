// File: 6.13.c
// Author: iBug

#include <stdio.h>

int main(){
	char s1[200], s2[100];
	printf("Please give two strings: ");
	scanf("%s%s", s1, s2);
	int n = 0, i = 0;
	while (s1[n] != '\0'){
		n ++;
	}
	while (s2[i] != '\0'){
		s1[n+i] = s2[i];
		i ++;
	}
	s1[n+i] = '\0';
	printf("The concatenated string is %s\n", s1);
	return 0;
}

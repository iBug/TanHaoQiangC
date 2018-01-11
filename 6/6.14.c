// File: 6.14.c
// Author: iBug

#include <stdio.h>

int main(){
	char s1[100], s2[100];
	printf("Please give two strings: ");
	scanf("%s%s", s1, s2);
	int i = 0, diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0'){
		if (s1[i] != s2[i]){
			diff = s1[i] - s2[i];
			break;
		}
		i ++;
	}
	printf("The difference is %d\n", diff);
	return 0;
}

// File: 8.17.c
// Author: iBug

#include <stdio.h>

int strcmp(const char* p1, const char* p2){
	int i = 0, diff = 0;
	while (p1[i] != '\0' && p2[i] != '\0'){
		if (p1[i] != p2[i]){
			diff = p1[i] - p2[i];
			break;
		}
		else if (p1[i] == 0 || p2[i] == 0){
			diff = p1[i] - p2[i];
			break;
		}
		i ++;
	}
	return diff;
}

int main(){
	char s1[100], s2[100];
	printf("Please give two strings: ");
	scanf("%s%s", s1, s2);
	int d = strcmp(s1, s2);
	printf("The difference is %d\n", d);
	return 0;
}

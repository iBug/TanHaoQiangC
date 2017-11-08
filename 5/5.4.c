// File: 5.4.c
// Author: iBug

#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	int len;
	printf("Please give a string: ");
	gets(s);
	len = strlen(s);
	int i, alpha = 0, digit = 0, space = 0, other = 0;
	for (i = 0; i < len; i ++){
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
			alpha ++;
		}
		else if (s[i] >= '0' && s[i] <= '9'){
			digit ++;
		}
		else if (s[i] == ' '){
			space ++;
		}else{
			other ++;
		}
	}
	printf("There are %d letters, %d digits, %d spaces and %d other symbols in the string.\n",
		alpha, digit, space, other);
	return 0;
}

// File: 7.9.c
// Author: iBug

#include <stdio.h>

int count(const char* s, int* alpha, int* digit, int* space, int* other){
	int i;
	for (i = 0; s[i] != '\0'; i ++){
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
			(*alpha) ++;
		}
		else if (s[i] >= '0' && s[i] <= '9'){
			(*digit) ++;
		}
		else if (s[i] == ' '){
			(*space) ++;
		}else{
			(*other) ++;
		}
	}
	return i;
}

int main(){
	char str[100];
	int a, d, s, o;
	printf("Please give a string: ");
	gets(str);
	count(str, &a, &d, &s, &o);
	printf("There are %d letters, %d digits, %d spaces and %d other symbols in the string.\n",
		a, d, s, o);
	return 0;
}

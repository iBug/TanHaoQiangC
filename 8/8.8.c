// File: 8.8.c
// Author: iBug

#include <stdio.h>
#include <string.h>

void countString(const char* str, int* ualpha, int* lalpha, int* digit, int* space, int* other){
	int i, len = strlen(str);
	for (i = 0; i < len; i ++){
		if (str[i] >= 'A' && str[i] <= 'Z'){
			(*ualpha) ++;
		}
		if (str[i] >= 'a' && str[i] <= 'z'){
			(*lalpha) ++;
		}
		else if (str[i] >= '0' && str[i] <= '9'){
			(*digit) ++;
		}
		else if (str[i] == ' '){
			(*space) ++;
		}
		else{
			(*other) ++;
		}
	}
}

int main(){
	char s[100];
	int len;
	printf("Please give a string: ");
	gets(s);
	len = strlen(s);
	int i, ualpha = 0, lalpha = 0, digit = 0, space = 0, other = 0;
	countString(s, &ualpha, &lalpha, &digit, &space, &other);
	printf("There are %d uppercase letters, %d lowercase letters, %d digits, %d spaces and %d other symbols in the string.\n",
		ualpha, lalpha, digit, space, other);
	return 0;
}

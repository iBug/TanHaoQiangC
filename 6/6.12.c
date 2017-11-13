// File: 6.12.c
// Author: iBug

#include <stdio.h>
#include <string.h>

int main(){
	char s[100], t[100];
	printf("Please enter passphrase:\n");
	gets(s);
	int i, len = strlen(s);
	for (i = 0; i < len; i ++){
		if (s[i] >= 'A' && s[i] <= 'Z'){
			t[i] = 'A' + 25 - (s[i]-'A');
		}
		else if (s[i] >= 'a' && s[i] <= 'z'){
			t[i] = 'a' + 25 - (s[i]-'a');
		}
		else {
			t[i] = s[i];
		}
	}
	t[i] = '\0';
	printf("The passphrase is %s\n", s);
	printf("The text is %s\n", t);
	return 0;
}

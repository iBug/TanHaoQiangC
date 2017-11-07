// File: 10.3.c
// Author: iBug

#include <stdio.h>

int main(){
	char ch;
	FILE *out;
	out = fopen("test", "w");
	while (1){
		ch = getchar();
		if (ch == '!') break;
		if (ch >= 'a' && ch <= 'z'){
			ch -= 'a' - 'A';
		}
		fputc(ch, out);
	}
	fclose(out);
	return 0;
}

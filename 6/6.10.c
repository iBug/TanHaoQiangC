// File: 6.10.c
// Author: TaoKY

#include <stdio.h>
#include <ctype.h>

int main(){
	int upper = 0, lower = 0, num = 0, space = 0, others = 0;
	int c;
	while ((c = getchar()) != EOF){
		if (isupper(c))
			upper++;
		else if (islower(c))
			lower++;
		else if (isdigit(c))
			num++;
		else if (c == ' ')
			space++;
		else
			others++;
	}
	printf("%d %d %d %d %d", upper, lower, num, space, others);
	return 0;
}

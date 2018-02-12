// File: 8.19-Tao.c
// Author: TaoKY

#include <stdio.h>
#define SIZE 100000

char memoryPoll[SIZE];
char *pos = memoryPoll;

// Well, @iBug is too angry at this problem...
// In fact, K&R's book has the solution to the problem.
// But Tan's ambiguous words really make the problem very confusing.

void *new(int n);
void free(void *p);

int main(){
	// nothing to do
	return 0;
}

void *new(int n){
	if (n >= 0 && pos + n <= memoryPoll + SIZE){
		char *res = pos;
		pos += n;
		return (void *)res;
	}
	else
		return NULL;
}

void free(void *p){
	if ((char *)p >= memoryPoll && (char *)p < memoryPoll + SIZE)
		pos = (char *)p;
}

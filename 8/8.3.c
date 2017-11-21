// File: 8.3.c
// Author: iBug

#include <stdio.h>

void input(int* a){
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
}

void output(int* a){
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void process(int* a){
	int i, m, t;
	// Process the smallest number
	m = 0;
	for (i = 1; i < 10; i++)
		if (a[i] < a[m])
			m = i;
	t = a[m];
	a[m] = a[0];
	a[0] = t;
	m = 0;
	// Process the biggest number
	for (i = 1; i < 10; i++)
		if (a[i] > a[m])
			m = i;
	t = a[m];
	a[m] = a[9];
	a[9] = t;
}

int main(){
	int a[10];
	printf("Please give 10 numbers: ");
	input(a);
	printf("Processing numbers.\n");
	process(a);
	printf("Here are them: ");
	output(a);
	return 0;
}

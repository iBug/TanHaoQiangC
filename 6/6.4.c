// File: 6.4.c
// Author: iBug

#include <stdio.h>

int main(){
	int n, a[100], x;
	printf("Please input the length of the array: ");
	scanf("%d", &n);
	printf("Please input the array: ");
	int i;
	for (i = 0; i < n; i ++){
		scanf("%d", &a[i]); 
	}
	printf("Please input a number: ");
	scanf("%d", &x);
	for (i = n-1; i >= 0; i --){
		if (a[i] > x){
			a[i+1] = a[i];
		}
		else{
			i ++;
			break;
		}
	}
	a[i] = x;
	printf("The array is: ");
	for (i = 0; i <= n; i ++){
		printf("%d ", a[i]); 
	}
	printf("\n");
	return 0;
}

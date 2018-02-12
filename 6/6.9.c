// File: 6.9.c
// Author: TaoKY

#include <stdio.h>
#define NUM 15

int main(){
	int num[NUM];
	for (int i = 0; i < NUM; i++)
		scanf("%d", &num[i]);

	int search;
	printf("Search: ");
	scanf("%d", &search);

	int left = 0, right = NUM - 1, res = -1;
	while (left <= right){
		int mid = left + (right - left) / 2;
		if (num[mid] < search){
			right = mid - 1;
		}
		else if (num[mid] > search){
			left = mid + 1;
		}
		else{
			res = mid;
			break;
		}
	}
	if (res == -1)
		puts("Cannot find!");
	else
		printf("%d\n", res);
	return 0;
}

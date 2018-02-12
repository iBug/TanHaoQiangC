// File: 5.10.c
// Author: TaoKY

#include <stdio.h>

int main(){
	double ans = 0;
	int first = 1, second = 2, third;
	for (int i = 0; i < 20; i++){
		ans += (double)second / first;
		third = first + second;
		first = second; second = third;
	}
	printf("%lf\n", ans);
	return 0;
}

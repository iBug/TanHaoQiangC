// File: 5.7.c
// Author: TaoKY

#include <stdio.h>

int main(){
	double ans = 0;
	for (int i = 1; i <= 100; i++)
		ans += i;
	for (int i = 1; i <= 50; i++)
		ans += i * i;
	for (int i = 1; i <= 10; i++)
		ans += 1.0 / i;
	printf("%lf\n", ans);
	return 0;
}

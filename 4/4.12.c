// File: 4.12.c
// Author: iBug

#include <stdio.h>

int main(){
	double x, y;
	printf("Enter coordinate: ");
	scanf("%lf%lf", &x, &y);
	if ((x-2)*(x-2)+(y-2)*(y-2) <= 1.0 ||
		(x+2)*(x+2)+(y-2)*(y-2) <= 1.0 ||
		(x-2)*(x-2)+(y+2)*(y+2) <= 1.0 ||
		(x+2)*(x+2)+(y+2)*(y+2) <= 1.0){
		printf("The height is 10m.\n");
	}else{
		printf("The height is 0m.\n");
	}
	return 0;
}

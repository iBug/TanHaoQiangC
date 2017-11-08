#include <stdio.h>

double f(double I){
	if (I <= 1.0e+5){
		return I * 10.0e-2;
	}else if (I > 1.0e+5 && I <= 2.0e+5){
		return f(1.0e+5) + (I-1.0e+5) * 7.5e-2;
	}else if (I > 2.0e+5 && I <= 4.0e+5){
		return f(2.0e+5) + (I-2.0e+5) * 5.0e-2;
	}else if (I > 4.0e+5 && I <= 6.0e+5){
		return f(4.0e+5) + (I-4.0e+5) * 3.0e-2;
	}else if (I > 6.0e+5 && I <= 1.0e+6){
		return f(6.0e+5) + (I-6.0e+5) * 1.5e-2;
	}else if (I > 1.0e+6){
		return f(1.0e+6) + (I-1.0e+6) * 1.0e-2;
	}
}

int main() {
	double a;
	for (;;){
		printf("Give I: ");
		if (!scanf("%lf", &a)) break;
		printf("%lf\n", f(a));
	}
}

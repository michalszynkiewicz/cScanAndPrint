#include <stdio.h>

int main() {
	double val = 12.4212331243;
	printf("%.3lf\n", val); 	/* 12.421	.3 - 3 miejsca po przecinku, f - liczba zmienno przecinkowa w "normalnym" formacie*/

	printf("%011.4e\n", val); 	/* 01.2421e+01	0 - uzupełnij zerami, 11 - co najmniej 11 znaków, .4 - cztery miejsca po przecinku, e - format naukowy*/	
	return 0;
}

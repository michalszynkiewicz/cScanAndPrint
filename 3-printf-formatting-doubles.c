#include <stdio.h>

int main() {
	double val = 12.4212331243;
	printf("%.3lf\n", val); 	/* 12.421	.3 - 3 decimal places, f - print double in "normal" format*/

	printf("%011.4e\n", val); 	/* 01.2421e+01	0-prepend with zero, 11 - at least 11 chars, .4 - for decimal places, e - double in scientific format*/
	return 0;
}

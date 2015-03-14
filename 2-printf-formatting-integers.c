#include <stdio.h>

int main() {

	printf("%x\n", 10);  	/* "a"	X - hexadecimal small lettters */
	printf("%#X\n", 10); 	/* "0XA" 	X - hexadecimal big letters, # adds 0x prefix */

	printf("%+05d\n", 12); 	/* "+0012"	+ - add sign, 0 - prepend with zeroes, 5 - output should take at least 5 places */
	printf("%-5d\n", 12);	/* "12"		- - align to left, 5 - at least 5 chars */
	return 0;
}

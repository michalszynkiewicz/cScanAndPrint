#include <stdio.h>

int main() {
	int c;
	char buffer[4096];
	printf("enter a char to read with getc: ");
	c = getc(stdin); /* has the same effect as getchar() */
	getchar(); /* for newline character ! */
	printf("you entered %c\n", c);

	printf("enter a string to read by gets: ");
	gets(buffer);
	printf("you entered: %s\n", buffer);

	printf("enter a string and note the newline char left by fgets: ");
	fgets(buffer, 4096, stdin);
	printf("you entered: %s\n", buffer);
	
	return 0;
}

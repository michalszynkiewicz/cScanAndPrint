#include <stdio.h>

int main() {
	int i;
	ungetc('1', stdin);
	printf("enter a number: ");
	scanf("%d", &i);
	printf("read value: %d\n", i); /* one will be prepended to the entered number */ 
	return 0;
}

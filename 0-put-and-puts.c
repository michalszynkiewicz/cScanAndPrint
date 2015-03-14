#include <stdio.h>

int main() {
        puts("info to print"); /* dodaje znak nowej linii */
	fputs("error to print", stderr); /* brak znaku nowej linii! */

        putc('c', stdout);
        putc('\n', stdout);
        return 0;
}


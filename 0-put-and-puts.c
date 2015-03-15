#include <stdio.h>

int main() {
        puts("info to print"); /* adds a newline character */
	fputs("error to print", stderr); /* no newline character! */

        putc('c', stdout);
        putc('\n', stdout);
        return 0;
}


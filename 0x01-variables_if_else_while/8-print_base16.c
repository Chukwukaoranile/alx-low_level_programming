#include <stdio.h>

/**
 * main - Prints the numbers of base 16 in lowercase, followed by a newline
 *
 */

int main(void)
{
	int base16;
	char c;

	for (base16 = '0'; base16 <= '9'; base16++)
		putchar(base16);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

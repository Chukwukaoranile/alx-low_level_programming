#include "main.h"

/**
 * main - Alphabet, in lowercase, followed by a new line.
 * Return: Always 0
 */

void print_alphabet(void);
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar('alpha');
		_putchar('\n');
	}

	return (0);
}

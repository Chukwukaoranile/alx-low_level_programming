#include "main.h"

/**
 * print_alphabet - Alphabet, in lowercase, followed by a new line.
 * Return: successful
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}

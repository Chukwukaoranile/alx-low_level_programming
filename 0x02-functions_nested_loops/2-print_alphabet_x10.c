#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * @_putchar - to be printed.
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	int n, co;

	co = 10;

	while (co <  10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);

		_putchar(co)
		co++;

	_putchar('\n');

	}
}

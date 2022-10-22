#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int draw, diag;

	if (n > 0)
	{
		for (draw = 0; draw < n; draw++)
		{
			for (diag = 0; diag < draw; diag++)
				_putchar(' ');
			_putchar('\\');

			if (draw == n - 1)
				continue;

				_putchar('\n');
		}
	}

	_putchar('\n');
}

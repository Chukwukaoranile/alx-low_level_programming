#include "main.h"

/**
 * print_line - Draw a straight line using the character _.
 * @n: the number of _ charcters to be printed.
 */

void print_line(int n)

	int draw;

	if (n > 0)
	{
		for (draw = 0; draw < n; draw++)
			_putchar('_');
	}
	_putchar('\n');
}

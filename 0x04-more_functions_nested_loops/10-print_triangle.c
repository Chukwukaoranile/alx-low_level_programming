#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int draw, tri;

	if (size > 0)
	{
		for (draw = 1; draw <= size; draw++)
		{
			for (tri = size - draw; tri > 0; tri--)
				_putchar(' ');

			for (tri = 0; tri < draw; tri++)
				_putchar('#');

			if (draw == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

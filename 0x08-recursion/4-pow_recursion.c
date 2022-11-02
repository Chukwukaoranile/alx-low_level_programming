#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x and y
 *
 * @x: The variable 1
 * @y: The variable 2
 *
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		x = x * _pow_recursion(x, y);
		return (x);
	}

	return (0);
}

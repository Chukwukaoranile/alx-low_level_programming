#include "main.h"

/**
 * factorial -  a function that returns the value of x and y
 * @n: factoral of the number
 *
 * Return: The factorial value of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}

	return (0);

}

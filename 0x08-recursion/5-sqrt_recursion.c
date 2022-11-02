#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square
 *
 * @n: Number for the square root
 * Return: The value of the square root
 */

int _sqrt(int x, int y)
{
	int sum;

	sum = x - y;

	if (x < 0)
		return (-(y / 2) - 1);
	if (sum == 0)
		return (1);
	else
		return (1 + _sqrt(sum, y + 2));
}
/**
 * _sqrt_recursion - the sqaure root
 * @n: number radicando
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0);
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}

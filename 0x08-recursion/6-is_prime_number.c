#include "main.h"

/**
 * is_prime - primo
 * @x: Number 1
 * @y: Number 2
 *
 * Return: Result
 */

int is_prime(int x, int y)
{
	if ((x % y) == 0 && y < x)
		return (0);
	if (x == y)
		return (1);
	else
		return (is_prime(x, y + 1));
}
/**
 * is_prime_number - function that returns 1 if the input
 *  integer is a prime number, otherwise return 0.
 *
 * @n: Variable parameter
 *
 * Return:Result
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

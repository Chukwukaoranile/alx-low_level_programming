#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: Variable for the length
 *
 *  Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s != '\0')
	{
		s++;
		n = n + _strlen_recursion(s);

		return (n);

	}
	return (0);

}

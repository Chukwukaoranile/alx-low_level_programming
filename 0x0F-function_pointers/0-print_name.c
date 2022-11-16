#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: variable 1
 * @f: Variable function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			(*f)(name);
		}
	}
}

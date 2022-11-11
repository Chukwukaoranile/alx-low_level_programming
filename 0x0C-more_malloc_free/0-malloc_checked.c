#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - A function that allocates memory using malloc.
 *
 * @b: Variable
 *
 * Return: Secessful
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(sizeof(char) * b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}

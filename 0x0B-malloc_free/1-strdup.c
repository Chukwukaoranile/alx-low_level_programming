#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly allocated space
 *
 * @str: Parameter with the string
 *
 * Return: successful
 */

char *_strdup(char *str)
{
	char *a;
	void *x = NULL;
	int n = 0, i = 0;

	if (str != NULL)
	{
		while (str[n] != 0)
		{
			n++;
		}
	}
	else
	{
		return (x);
	}

	a = malloc(sizeof(char) * (n + 1));

	if (a == NULL)
	{
		return (0);
	}
	else
	{
		while (i <= n)
		{
			a[i] = str[i];
			i++;
		}

		return (a);
	}
}

#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: minimum range
 * @max: maximum range
 *
 * Return: successful Always
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
	{
		*(arr + j) = i;
	}
	return (arr);
}

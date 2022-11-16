#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function given
 * as a parameter on each element of an array.
 * @array: int pointer
 *
 * @size: size_t
 *
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{

			action(array[i]);
		}
	}
}

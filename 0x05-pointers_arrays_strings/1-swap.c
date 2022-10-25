#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: Int a
 * @b: int b
 * Return: Always 0 (Successful)
 */

void swap_int(int *a, int *b)
{
	int temp;
		temp =  *a;
		*a = *b;
		*b = temp;
}

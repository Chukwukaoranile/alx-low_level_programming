#include "main.h"

/**
 * main - Function that swaps the values of two integers
 *
 * Return: Always 0 (Successful)
 */

void swap_int(int *a, int *b)
{
	*a = 42;
	*b = 9;
	int temp;
		temp =  *a;
		*a = *b;
		*b = temp;
}

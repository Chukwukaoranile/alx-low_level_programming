#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - Print the elements of an array
 *
 * @start: Pointer to the first element of the array to print
 * @end: Pointer to the last element of the array to print
 */
void print_array(int *start, int *end)
{
	int i = 0;

	printf("Searching in array: ");
	while (*(start + i) <= *end)
	{
		if (i > 0)
			printf(", ");
		printf("%d", start[i]);

		i++;
	}
	printf("\n");
}

/**
 * binary_search - Binary search algorithm to search for a value in a sorted array
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1;

	if (!array)
		return (-1);

	return (b_search(array, l, r, size, value));
}

/**
 * b_search - Binary search algorithm (recursive)
 *
 * @array: Pointer to the first element of the array to search in
 * @l: Index of the first element of the array to search in
 * @r: Index of the last element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int b_search(int *array, int l, int r, size_t size, int value)
{
	int p = 0;

	if (l > r)
		return (-1);

	print_array(&array[l], &array[r]);
	p = (l + r) / 2;

	if (value == array[p])
		return (p);

	if (value < array[p])
		r = p - 1;
	else
		l = p + 1;

	return (b_search(array, l, r, size, value));
}


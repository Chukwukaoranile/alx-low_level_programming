#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s:  variable length of string.
 * Return: Always 0 (Successful)
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

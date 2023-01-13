#include "main.h"

int find_pal(char *s, int f_i, int b_i);
int count_string(char *s);

/**
 * is_palindrome - checks for string
 * @s: string
 *
 * Return: Result
 */

int is_palindrome(char *s)
{
	int count;

	count = 0;
	if (!(*s))
		return (0);

	count = count_string(s);
	return (find_pal(s, 0, count - 1));
}


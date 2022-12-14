#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int x = 0, y, uc = 0;
	int lc[5] = {97, 101, 111, 116, 108};
	int code[5] = {4, 3, 0, 7, 1};

	while (*(str + x))
	{
		for (y = 0; y < 5; y++)
		{
			uc = lc[y] - 32;
			if (str[x] == lc[y] || str[x] == uc)
			{
				str[x] = code[y] + 48;
			}
		}
		x++;
	}
	return (str);
}

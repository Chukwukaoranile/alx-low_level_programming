#include "main.h"

/**
 * *_strcat - Concatenates the string pointed to by @src,
 * including the terminating
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	while (src[index])
	{
		dest[dest_len++] = src[index];
		dest_len++;
		index++;
	}
	return (dest);
}

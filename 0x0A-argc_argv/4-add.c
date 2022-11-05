#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * isNumeric - checks if string  is numeric
 *
 * @s: string to check
 *
 * Return: true if is numeric, else return false
 */

bool isNumeric(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			return (false);
		}
	}
	return (true);
}

/**
 * main - A program that adds positive numbers
 *
 * @argc: parameter 1 for argument
 * @argv: parameter 2 for argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	(void)argc;
	(void)argv;

	for (i = 1; i < argc; i++)
	{
		if (!isNumeric(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

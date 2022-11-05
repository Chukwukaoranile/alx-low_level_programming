#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: parameter 1 for print
 * @argv: parameter 2 for print
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argc;
	(void)argv;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

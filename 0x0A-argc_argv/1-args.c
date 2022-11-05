#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it
 *
 * @argc: Variable 1 for argument
 * @argv: variable 2 for argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

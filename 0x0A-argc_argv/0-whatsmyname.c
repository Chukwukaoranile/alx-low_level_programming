#include <stdio.h>

/**
 * main - a program that prints its name, Followed by a new line
 *
 * @argc: counter of arguments passed
 * @argv: vector of strings with arguments passed
 *
 * Return: success 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

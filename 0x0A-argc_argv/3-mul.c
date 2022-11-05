#include <stdio.h>
#include <stdlin.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: num 1
 * @argv: num 2
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	(void)argc;
	(void)argv;

	if (argc < 3)
	{
		printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);

}

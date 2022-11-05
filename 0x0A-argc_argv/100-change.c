#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to
 * make change for an amount of money.
 *
 * @argc: Parameter for coin 1
 * @argv: Parameter for coin 2
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int kobo, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	kobo = atoi(argv[1]);

	while (kobo > 0)
	{
		coins++;
		if ((kobo - 25) >= 0)
		{
			kobo -= 25;
			continue;
		}
		if ((kobo - 10) >= 0)
		{
			kobo -= 10;
			continue;
		}
		kobo--;
	}

	printf("%d\n", kobo);

	return (0);
}


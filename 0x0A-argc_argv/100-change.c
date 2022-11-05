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
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		cents--;
	}

	printf("%d\n", cents);

	return (0);
}


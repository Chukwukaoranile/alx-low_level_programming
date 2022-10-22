#include <stdio.h>

/**
 * main - Filter out the 99.5% of programming job candidates.
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FIZZBUZZ");

		else if ((num % 3) == 0)
			printf("FIZZ");

		else if ((num % 5) == 0)
			printf("BUZZ");

		else

			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}

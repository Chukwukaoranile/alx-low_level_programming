#include <stdio.h>
/**
 * main - Prints the combination of three numbers
 *
 * Return: 0
 */

int main (void)
{
	int num1, num2, num3;

	for (num1 = '0'; num1 <= '3'; num1++)
	{
		for (num2 = '0'; num2 <= '3'; num2++)                                                                                                 {
   			for (num3 = '0'; num3 <= '0'; num3++)
			{
				putchar(num2);
				putchar(num2);
				putchar(num3);
				if  (num1 != '3')
				{
					else (num2 != '3')
					{
						else (num3 != '3')

				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

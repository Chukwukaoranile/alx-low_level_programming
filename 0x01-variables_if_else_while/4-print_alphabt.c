#include <stdio.h>

/**
* main - Prints all single digit numbers of base 10 starting from 0
*
*Return: Always 0
*/

int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	putchar('\n');
	return (0);
}

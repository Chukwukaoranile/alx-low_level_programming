#include <stdio.h>

/**
* Main - This program will assign a random number to the variable n 
*
* Return: Always 0
*/

int main(void)
{
	char ch;
	char c;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}

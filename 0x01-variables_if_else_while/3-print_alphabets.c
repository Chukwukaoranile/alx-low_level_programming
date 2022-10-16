#include <stdio.h>

/**
* Main - prints the alphabet in lowercase, and then in uppercase
*
*Return: Always 0
*/

int main(void) //character in lowercase
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

#include "main.h"

/**
 * _puts - Function that prints a string, followed by a new line, to stdout.
 * @str: to be printed
 */

void _puts(char *str)
{
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(*str);
	_puts('\n');
}

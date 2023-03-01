#include "main.h"
/**
 * print_rev - print a string, in reverse.
 * @s: given string
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;
	leng = leng - 1;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}

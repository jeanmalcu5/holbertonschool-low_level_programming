#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string being printed.
 */
void print_rev(char *s)
{
	int i;
	int len;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

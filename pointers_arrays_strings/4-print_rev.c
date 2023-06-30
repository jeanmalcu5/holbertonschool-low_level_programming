#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string being printed.
 */
void print_rev(char *s)
{
	int i;
	int j;
	int len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; i--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

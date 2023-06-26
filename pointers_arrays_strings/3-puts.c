#include "main.h"
/**
 * _puts - prints a string, followed by a new line.
 * @str: string to be printed.
 */
void _puts(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

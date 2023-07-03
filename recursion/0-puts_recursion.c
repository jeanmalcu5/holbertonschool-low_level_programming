#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string.
 */
void _puts_recursion(char *s)
{
	for (s = '0'; s != '\0'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}

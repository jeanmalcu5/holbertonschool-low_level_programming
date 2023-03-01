#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: char
 */
void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}

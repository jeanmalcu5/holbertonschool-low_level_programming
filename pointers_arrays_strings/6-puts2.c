#include "main.h"
/**
 * puts2 - print every other character of a string.
 * @str: string
 */
void puts2(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

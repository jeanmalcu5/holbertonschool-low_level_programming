#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string being printed in half.
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if ((i % 2) != 0)
		i = i + 1;

	i = i / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}

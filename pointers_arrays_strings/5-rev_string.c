#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string.
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	int len;

	len = i;

	for (j = len - 1; j >= 0; i--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

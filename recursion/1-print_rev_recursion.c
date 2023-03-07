#include "main.h"
/**
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0');
	{
		_putchar(*s);
		return;
	}

	else
	{
		_putchar(s + 1);
		_putchar(*s);
	}

}

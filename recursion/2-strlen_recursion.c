#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: char
 */
int _strlen_recursion(char *s)
{
	int i;

	for (i = 0; *s != '\0'; ++i);

	_putchar(*s);
	return (*s);
}

#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	if (s[0] == 0)
	{
		s++;
		_strlen_recursion();
	}
}

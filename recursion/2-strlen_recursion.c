#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[0] != '\0')
	{
		len++;
		_strlen_recursion(++s[0])
	}
	else
	{
		return (len);
	}
}

#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: variable being checked.
 * Return: 1 if c is a lowercase or uppercase letter.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

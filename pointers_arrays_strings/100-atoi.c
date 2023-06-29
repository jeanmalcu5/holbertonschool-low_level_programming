#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: string.
 * Return: res.
 */
int _atoi(char *s)
{
	int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		res = res * 10 + s[i] - '0';
	}
	return (res);
}

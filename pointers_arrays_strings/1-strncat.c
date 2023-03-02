#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	for (d = 0; dest[d] != '\0'; i++)
	{
	}

	for (s = 0; s < n; s++)
	{
		dest[d + s] = src[s];
		if (src[s] == '\0')
			s = n;
	}

	return (dest);
}

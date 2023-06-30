#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (src[a] != '\0')
	{
		++a;
	}

	for (b = 0; dest[b] != '\0'; ++b, ++a)
	{
		src[a] = dest[b];
	}

	_putchar(*dest);

	return (dest);
}

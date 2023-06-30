#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	while (dest[b] != '\0')
	{
		src[a] = dest[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strcpy - copies the string point to by src.
 * @dest: destination.
 * @src: source.
 * Return: value of dest pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

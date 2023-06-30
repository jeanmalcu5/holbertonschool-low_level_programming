#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}

	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[length] = src[j];
	}

	_putchar(*dest);

	return (0);

}

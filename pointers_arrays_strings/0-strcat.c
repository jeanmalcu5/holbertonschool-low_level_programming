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
	while (src[length] != '\0')
	{
		++length;
	}

	for (j = 0; dest[j] != '\0'; ++j, ++length)
	{
		src[length] = dest[j];
	}

	_putchar(*dest);

	return (0);

}

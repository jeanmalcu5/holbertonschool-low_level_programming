#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: pointer.
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);

	return (s[i]);
}

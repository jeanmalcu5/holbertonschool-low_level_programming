#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: copy of the string.
 * Return: NULL if str = NULL.
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		p[j] = str[j];
	}

	return (p);
}

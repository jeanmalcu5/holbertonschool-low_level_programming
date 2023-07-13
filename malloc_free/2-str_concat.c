#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: s1 + s2. NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *p = malloc(sizeof(char) * (i + j + 1));
	int i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	else if (s2 == NULL)
	{
		s2  = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (p == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}

	p[i] = '\0';

	return (p);
}

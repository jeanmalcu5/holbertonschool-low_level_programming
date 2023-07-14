#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: source string.
 * @s2: destination string.
 * @n: parameter.
 * Return: pointer to newly allocated space in memory, which contains the
 * concantenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int s1len = 0, s2len = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1len = strlen(s1);
	s2len = strlen(s2);

	if (n < s2len)
		p = malloc(sizeof(char) * (s1len + n + 1));

	else
		p = malloc(sizeof(char) * (s1len + s2len + 1));

	if (p == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	while (j < n && s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}

	p[i] = '\0';
	return (p);
}

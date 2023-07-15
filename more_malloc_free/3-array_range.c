#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum.
 * @max: maximum.
 * Return: if min > max && malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *p, i, j = 0;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(max - min + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++, j++)
	{
		p[j] = i;
	}
	return (p);
}

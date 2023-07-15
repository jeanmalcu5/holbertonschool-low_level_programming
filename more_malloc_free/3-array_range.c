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
	int *p, i = 0, size = (max - min) + 1;

	if (min > max)
		return (NULL);

	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = min + i;
		i++;
	}

	return (p);
}

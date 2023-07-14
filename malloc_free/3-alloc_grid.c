#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of 2 dimensional array.
 * @height: height of 2 dimensional array.
 * Return: if width || height = 0 || negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	while (i < height)
	{
		p[i] = (int *)malloc(width * sizeof(int));

		if (p[i] == NULL)
		{
			while (j < i)
				free(p[j++]);

			free(p);
			return (NULL);
		}

		i++;
	}
	return (p);
}

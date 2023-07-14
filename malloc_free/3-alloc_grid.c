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
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **)malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}

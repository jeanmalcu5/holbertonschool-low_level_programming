#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: elements.
 * @size: bytes.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i, j = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(j);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		p[i] = 0;
	}
	return (p);
}

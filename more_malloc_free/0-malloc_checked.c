#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b:
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (malloc == NULL)
	{
		exit (98);
	}
	return (p);
}

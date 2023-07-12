#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and intializes it with a sprcific
 * char.
 * @size: of the array.
 * @c: specific char being initialized.
 * Return: if size = 0 || array = NULL, return NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

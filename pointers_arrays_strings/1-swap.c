#include "main.h"
/**
 * main - swaps the values of two integers.
 * @a: int.
 * @b: int.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

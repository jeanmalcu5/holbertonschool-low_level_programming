#include "main.h"
/**
 * swap_int - swaps the value of two integers.
 * @a: pointer a.
 * @b: pointer b.
 * @temp: temporary variable.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

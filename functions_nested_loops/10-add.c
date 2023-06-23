#include "main.h"
/**
 * add -
 */
int add(int a, int b)
{
	char c;

	c = a + b;

	for (a <= 0; a >= 9; a++)
	{
		for (b <= 0; b >= 9; b++)
		{
			_putchar(c);
		}
	}
	return (a+b);
}

#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: variable being computed.
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}

	_putchar(n);
}

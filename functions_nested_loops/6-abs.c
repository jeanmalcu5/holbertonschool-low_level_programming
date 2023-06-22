#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @int: variable being computed.
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n=abs(n);
		_putchar(n);
	}
}

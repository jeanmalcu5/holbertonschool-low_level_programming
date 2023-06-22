#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: parameter or member.
 * Return: 0
 */
int _abs(int n)
{
	int a;
	int b;

	a = n * (-1);
	b = n;

	if (n < 0)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

#include "main.h"
/**
 * checker - checks the input number from n to the base.
 * @n: random number.
 * @base: base number.
 * Return: natural square root of base.
 */
int checker(int n, int base)
{
	if (n * n == base)
	{
		return (n);
	}
	if (n * n > base)
	{
		return (-1);
	}
	return (checker(n + 1, base));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number.
 * Return: natural square root of n.
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}

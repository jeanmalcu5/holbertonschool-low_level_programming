#include "main.h"
/**
 * checker - checks recursively the input from is_prime_number
 * @n: iterator.
 * @base: base number.
 * Return: if n = prime number, return 1. Otherwise 0.
 */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
	{
		return (0);
	}
	else if (n == base - 1)
	{
		return (1);
	}
	else if (base > n)
	{
		return (checker(n + 1, base));
	}
	return (1);
}
/**
 * is_prime_number - determines if the input integer is a prime number.
 * @n: number.
 * Return: if n = prime number, return 1. otherwise 0.
 */
int is_prime_number(int n)
{
	return (checker(2, n));
}

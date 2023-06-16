#include <stdio.h>
/**
 * main - prints size of various types on the computer it is compiled and run on.
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	return (0);
}

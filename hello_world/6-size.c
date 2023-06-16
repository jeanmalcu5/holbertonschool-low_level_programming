#include <stdio.h>
/**
 * main - prints size of various types on the computer it is compiled and run on.
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of char: %zu bytes\n", sizeof(char));
	return (0);
}

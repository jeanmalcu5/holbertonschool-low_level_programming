#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}

	return (0);
}

#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int c = ',';

	for (n= '0'; n < 10; n++)
	{
		putchar(n);
		if (n < 9)
		{
			putchar(c );
		}
	}
	putchar('\n');
	return (0);
}

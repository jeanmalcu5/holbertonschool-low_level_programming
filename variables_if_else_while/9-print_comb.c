#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always 0.
 */
int main(void)
{
	int n; 

	for (n= '0'; n < 10; n++)
	{
		putchar(n);
		if (x < 9)
		{
			putchar(", ");
		}
	}
	putchar('\n')
	return (0);
}

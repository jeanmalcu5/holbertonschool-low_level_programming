#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a;
	char n;

	while (n <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		n++;
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

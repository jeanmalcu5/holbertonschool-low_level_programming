#include "main.h"
/**
 * main - prints alphabet in lowercase, followed by a new line.
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a;

	for (a = 0; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return;
}

#include <stdio.h>
/**
 * main - Prints all letters of alphabet, except q and e, in lowercase. Followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter !='q')
			putchar(letter);
	}

	putchar('\n');

	return(0);
}

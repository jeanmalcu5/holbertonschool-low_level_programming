#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - assign a random number to the variable n.
 * Return: Always 0
 */
int main(void)
{
	int n;
	char is[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("%s %d is %d and is greater than 5\n", is, n);
	}
	else if (n == 0)
	{
		printf("%s %d is %d and is 0\n", is, n);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", is, n);
	}

	return (0);
}

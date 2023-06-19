#include <stdio.h>
/**
 * main - print whether the number stored in the variable is positive or negative. 
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2

	printf("%d", n);

	if (n > 0)
	{
		printf("%d is positive");
	}
	if (n == 0)
	{
		printf("%d is zero");
	}
	if (n < 0)
	{
		printf("%d is negative");
	}
	return;
}

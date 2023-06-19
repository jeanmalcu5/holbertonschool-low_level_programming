#include <stdio.h>
/**
 * main - print whether the number stored in the variable is positive or negative. 
 * Return: Always 0
 */
int main(void)
{
	int n;

	printf("");
	scanf("%d", &n);

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

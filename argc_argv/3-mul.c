#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int n = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		n = atoi(argv[2]);
		printf("%d\n", i * n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

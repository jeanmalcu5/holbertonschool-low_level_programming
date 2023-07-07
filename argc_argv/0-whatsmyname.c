#include "main.h"
#include <stdio.h>
/**
 * main - prints the programs name, followed by a new line.
 * @argc: argument count.
 * @argv: argument vectors.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}

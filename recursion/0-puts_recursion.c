#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s:
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	int len = strlen(str) + 1;
  char *temp = alloca(len);

  int i;
  for (i = 0; i < len; i++)
  {
    char ch = str[i];
    if (ch == '\n')
      break;
    temp[i] = ch;
  }

  temp[i] = 0;

  puts(temp);
}

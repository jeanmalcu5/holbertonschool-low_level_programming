#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @*dest: destination string
 * @*src: source string
 */
char *_strcat(char *dest, char *src)
{
	strcat(*dest, *src);
	printf("The concatenated string is: %s ", *dest);
}

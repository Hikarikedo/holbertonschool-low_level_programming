#include "main.h"

/**
 *_strncat - appends the string to another string
 *@src: string to be appended to the other one
 *@dest: string
 *@n: number of elements
 *Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)

{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}


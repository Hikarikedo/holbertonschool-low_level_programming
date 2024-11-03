#include "main.h"
/**
 *_strcat - appends the string to another string
 *@src: string to be appended to the other one
 *@dest: string
 *Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}

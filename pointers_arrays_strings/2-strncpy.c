#include "main.h"

/**
 *_strncpy - copies a number of n elements from pointed string
 *@dest: destination
 *@src: string to be copied
 *@n: numbers of copied characters
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

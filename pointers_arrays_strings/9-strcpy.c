#include "main.h"
/**
 *_strcpy - function that copies the string that scr points to
 *@dest: copies the string
 *@src: string
 *Return: returns dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

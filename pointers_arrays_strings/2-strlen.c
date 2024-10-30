#include "main.h"
/**
 *_strlen - string lentgh
 *@s: string
 *Return: a returns the string length
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
{
	a++;
}
	return (a);
}

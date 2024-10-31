#include "main.h"
/**
 *puts2 - prints every 2 characters
 *@str: string
 */
void puts2(char *str)
{
	int index = 0;
	int a;

	while (str[index] != '\0')
{
	index++;
}
	for (a = 0; a < index; a += 2)
{
	_putchar(str[a]);
}
	_putchar('\n');
}

#include "main.h"
/**
 *puts2 - prints every 2 characters
 *@str: string
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
{
	_putchar(str[index]);
	index += 2;
}
	_putchar('\n');
}

#include "main.h"

/**
 * string_toupper - turns all the lowercase characters to uppercase
 * @str: string
 * Return: pointer to the string after change
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}
	return (str);
}

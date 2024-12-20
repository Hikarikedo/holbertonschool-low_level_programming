#include "stdio.h"
#include "stdlib.h"
#include "main.h"
/**
 *create_array - creates an array of chars + initializes it with specific char
 *@size: The number of elements to allocate for the array.
 *@c: The character that will initialize each element of the array
 *Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

#include "main.h"
/**
 * _islower - lower case char checker
 * c - characters that has to be checked by _islower
 * parameter: checks c
 * return: 1 if lowercase character, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (2);
}

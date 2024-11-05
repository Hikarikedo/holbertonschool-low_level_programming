#include "main.h"
/**
 * _strstr - locates a subsrting
 * @haystack:string
 * @needle: substring
 * Return: return 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack && *needle && (*h == *n))
		{
			haystack++;
			needle++;
		}
		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return ('\0');
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Loop through 0-9*/
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0'); /* Convert integer to character for 0-9*/
	}

	/*Loop through 10-15 for a-f*/
	for (i = 10; i <= 15; i++)
	{
		putchar(i - 10 + 'a'); /*Convert 10-15 to a-f*/
	}

	putchar('\n'); /*Print a newline at the end*/

	return (0);
}


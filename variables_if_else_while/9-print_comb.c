#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i; /*declaring i before the loop*/

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0'); /* Convert integer to character and print*/

		if (i != 9)
		{
			putchar(','); /* Print the comma*/
			putchar(' '); /*Print the space*/
		}
	}

	putchar('\n'); /*Print a newline at the end*/

	return (0);
}

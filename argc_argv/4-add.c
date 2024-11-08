#include "stdlib.h"
#include "stdio.h"

/**
 *main - adds positive numbers
 *@argc: counts the arguments
 *@argv: array of argument
 *Return: result of additions
 */

int main(int argc, char *argv[])
{
	int n, number, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (number = 0; argv[n][number]; number++)
		{
			if (argv[n][number] < '0' || argv[n][number] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}

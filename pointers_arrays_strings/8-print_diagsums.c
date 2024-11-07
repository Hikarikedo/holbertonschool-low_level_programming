#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 *@a: int
 *@size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int snum1 = 0;
	int snum2 = 0;

	for (i = 0; i < size; i++)
	{
		snum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		snum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", snum1, snum2);
}

#include "main.h"
/**
 *print_triangle - prints a triangle out of #
 *@size: size of the triangle
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
{
	_putchar('\n');
}
	for (a = 1; a <= size; a++)
{
	for (b = size - a; b > 0; b--)
{
	_putchar(' ');
}
	for (b = 1; b <= a; b++)
{
	_putchar('#');
}
	_putchar('\n');
}
}

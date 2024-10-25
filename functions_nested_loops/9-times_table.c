#include "main.h"
/**
 * times_table - prints time tables from 0 to 9
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int res = 0;

	for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
{
	res = i * j;
	if (res < 10)
{
	if (j != 0)
	_putchar(' ');
	_putchar(res + '0');
}
	else
{
	_putchar(res / 10 + '0');
	_putchar(res % 10 + '0');
}
	if (j < 9)
{
	_putchar(',');
	_putchar(' ');
}
}
	_putchar('\n');
}
}

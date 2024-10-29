#include "main.h"
/**
 *swap_int - swaps values of a and b variables
 *@a: variable with a value of 98 before swap
 *@b: variable with a value of 42 before swap
 */
void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

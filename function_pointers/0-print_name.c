#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - prints a name
 *@name: a name
 *@f: function pointer
 *return: void = nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

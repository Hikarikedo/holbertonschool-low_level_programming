#include "stdio.h"

/**
 *main - prints the program's name
 *@argc: argument count
 *@argv: array of arguments
 *Return: returns 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

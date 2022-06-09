#include "main.h"

/**
 * print_line - this prints the _ character the specified number of times
 *
 * @n: number of times the _ should be printed
 * Return: this has no return value, it is void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

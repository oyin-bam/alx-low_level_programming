#include "main.h"

/**
 * print_diagonal -  this prints a diagonal line
 *
 * @n: number of times the \ should be printed
 * Return: has no return value, it is void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

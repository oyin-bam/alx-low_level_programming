#include "main.h"

/**
 * print_diagonal -  this prints a diagonal line
 *
 * @n: number of times the \ should be printed
 * Return: has no return value, it is void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

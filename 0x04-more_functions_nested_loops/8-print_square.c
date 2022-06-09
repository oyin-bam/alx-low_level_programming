#include "main.h"

/**
 * print_square - this prints a square
 *
 * @size: size of the square we want to print
 * Return: this has no return value, it is void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

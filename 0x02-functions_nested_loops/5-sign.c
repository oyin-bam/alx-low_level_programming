#include "main.h"

/**
 * print_sign - this prints the sign of the number
 *
 * @n: number that is checked
 * Return: returns 1 if +ve, 0 if 0, -1 if -ve
 */
int print_sign(int n)
{
	int r;

	r = i % 10;
	if (r < 0)
	{
		_putchar('+');
		return (-1);
	}
	else if (r == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}

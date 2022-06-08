#include "main.h"

/**
 * print_last_digit - this prints the last digit of a number
 *
 * @n: number to be checked
 * Return: the last number is returned
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		n = n * -1;
	}
	r = n % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');
	return (r);
}

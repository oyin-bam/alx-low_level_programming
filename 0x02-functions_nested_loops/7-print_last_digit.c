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
	_putchar('r');
	return (n % 10);
}

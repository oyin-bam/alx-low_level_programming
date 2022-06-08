#include "main.h"

/**
 * _abs - this computes the absolute value
 *
 * @n: number to be compute
 * Return: returns the absolute value of n on success
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}

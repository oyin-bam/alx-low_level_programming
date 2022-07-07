#include "variadic_functions.h"

/**
 * sum_them_all- function that returns the sum of all its parameters
 * using variadic functions
 * @int: the number of parameters we want to be considered from the users entry
 *
 * Return: this returns the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	va_start(ap, n);
	unsigned int i ;
	int sum;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}

#include "main.h"

/**
 * swap_int -  this program swaps the values of two integers
 * @a: first value of the number pair to be swapped
 * @b: second value of the number pair to be swapped
 *
 * Return: no return value, it is void
 */
void swap_int(int *a, int *b)
{
	int s1;
	int s2;

	s1 = *a;
	s2 = *b;

	*a = s2;
	*b = s1;
}

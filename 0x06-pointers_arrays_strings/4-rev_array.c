#include "main.h"

/**
 * reverse_array - this funtion reverses an array
 * @a: the array to be reversed
 * @n: the number of elements in the array
 *
 * Return: this has no return value, it is void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	j = n - 1;
	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}

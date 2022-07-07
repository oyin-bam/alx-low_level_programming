#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index- function that searches for an integer.
 * @array: array to be searched
 * @size: size of the array
 * @cmp: function operation to be performed on each array element
 *
 * Return: returns the index of the first element for which cmp is true
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

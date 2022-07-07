#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator-  function that executes a function
 * given as a parameter on each element of an array.
 * @array:array to be iterated through
 * @size: size of the array
 * @action:function to be performed on each element of the array
 *
 * Return: returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

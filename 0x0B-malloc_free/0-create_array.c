#include "main.h"
#include <stdlib.h>

/**
 * create_array- this function creates an
 * array of characters depending on the users request
 * @size: the size of array the user wants
 * @c: the initializing character for the array
 *
 * Return: this returns a pointer to the created array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
}

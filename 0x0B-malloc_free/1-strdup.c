#include "main.h"
#include <stdlib.h>

/**
 * _strdup- this function returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter
 * @str: the user given string
 *
 * Return: returns a pointer to the duplicated string or NULL
 * if memory is insufficient
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str != NULL)
	{
		i = 0;

		while (str[i] != '\0')
		{
			i++;
		}
		ptr = (char *)malloc(i * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < i; j++)
		{
			ptr[j] = str[j];
		}
		return (ptr);
	}
	return (NULL);
}

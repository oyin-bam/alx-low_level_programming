#include "main.h"
#include <stdlib.h>

/**
 * str_concat- this function concatenates two strings
 * @s1: first string
 * @s2: string to be concatenated to first string s1
 *
 * Return: this returns the pointer to the new concatenated string
 * if no memory is allocated, return null
 * treat NULL passed as empty string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, sum;
	char *ptr;

	if (s1[0] == '\0')
		i = 0;
	else{
		i = 0;
		while(s1[i] != '\0')
		{
			i++;
		}
	}
	if (s2[0] == '\0')
		j = 0;
	else{
		j = 0;
		while (s2[j] != '\0')
		{
			j++;
		}
	}
	sum = i + j + 1;
	ptr = (char *)malloc(sum * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < sum; l++)
	{
		while (s1[l] != '\0')
		{
			ptr[l] = s1[l];
			l++;
		}
		k = 0;
		while (k < j && s2[k] != '\0')
		{
			ptr[l] = s2[k];
			k++;
			l++;
		}
		ptr[sum - 1] = '\0';
	}
	return (ptr);
}

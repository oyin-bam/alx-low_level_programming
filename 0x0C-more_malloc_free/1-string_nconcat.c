#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat- this function concatenates two strings
 * @s1: the first passed character
 * @s2: the second passed character with 'n' bytes to be concatenated
 * @n: number of bytes from s2 to be concatenated
 *
 * Return: this returns a pointer to new newly allocated space
 * in memory having the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l, m, sum;
	char *ptr;

	i = 0;
	while (s1 && s1[i])
		i++;
	j = 0;
	while (s2 && s2[j])
		j++;
	if (n < j)
		sum = i + n + 1;
	else
		sum = i + j + 1;
	ptr = malloc(sizeof(char) * sum);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (l = 0; l < (sum - 1);)
		{
			while (s1 && s1[l] != '\0')
			{
				ptr[l] = s1[l];
				l++;
			}
			m = 0;
			while (s2 && s2[m] != '\0')
			{
				ptr[l] = s2[m];
				m++;
				l++;
			}

		}
		ptr[sum - 1] = '\0';
		return (ptr);
	}
}

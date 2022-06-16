#include "main.h"

/**
 * _strcmp - this function compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: this returns 0 if equal, +ve if s1 > s2, -ve if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	j = 0;
	while (s1[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

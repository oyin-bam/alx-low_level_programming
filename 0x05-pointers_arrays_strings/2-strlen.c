#include "main.h"

/**
 * _strlen - this returns the lenght of the string
 * @s: string that its lenght is to be counted
 *
 * Return: this returns the integer value of the string lenght
 */
int _strlen(char *s)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		l += 1;
		i++;
	}

	return (l);
}

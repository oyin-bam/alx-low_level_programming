#include "main.h"

/**
 * print_rev - this prints the string given in reverse
 * @s: string to be printed in reverse
 *
 * Return: returns no value, it is void
 */
void print_rev(char *s)
{
	int i;
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	i = c - 1;
	if (s[i] == '\0')
	{
		i--;
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

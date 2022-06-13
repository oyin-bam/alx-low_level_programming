#include "main.h"

/**
 * puts_half - this prints the second half of a string
 * @str: the string to be printed
 *
 * Return: no return value, it is void
 */
void puts_half(char *str)
{
	int len;
	int len1;
	int i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		len1 = len / 2;
	}
	else
	{
		len1 = (len / 2) - 1;
	}
	for (i = len1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

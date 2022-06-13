#include "main.h"

/**
 * puts2 - this prints every other character of a string
 * @str: this is the string to be partly printed
 *
 * Return: no return value, it is void
 */
void puts2(char *str)
{
	int len;
	int i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len != 0)
	{
		for (i = 0; i < len; i+=2)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}

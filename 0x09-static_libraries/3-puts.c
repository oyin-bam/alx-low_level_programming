#include "main.h"
/**
 * _puts - this function prints a string it is passed
 * @str: the string to be printed
 *
 * Return: returns no value, it is void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

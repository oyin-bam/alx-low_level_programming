#include "main.h"

/**
 * print_most_numbers - this prints numbers 0 to 9 except 2 and 4
 *
 * Return: has no return value, it is void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar(i + '0');
	}
	_putchar('\n');

}

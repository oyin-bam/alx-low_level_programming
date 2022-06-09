#include "main.h"

/**
 * more_numbers - this prints numbers from 0 to 14 on 10 lines
 *
 * Return: this has no return value, it is void
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}

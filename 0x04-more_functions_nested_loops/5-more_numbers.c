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

	j = 0;
	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
		j++;
	}

}

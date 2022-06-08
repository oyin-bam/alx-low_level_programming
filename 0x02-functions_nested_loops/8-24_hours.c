#include "main"

/**
 * jack_bauer - this prints every minute of the day
 *
 * Return: no return, as it is void
 */
void jack_bauer(void)
{
	int i;
	int j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 0) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++
		}
		i++
	}
}

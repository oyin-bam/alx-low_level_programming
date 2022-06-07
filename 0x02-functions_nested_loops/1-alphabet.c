#include "main.h"

/**
 * print_alphabet - this prints the alphabets in lower case
 *
 * Return: return is void, no return
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

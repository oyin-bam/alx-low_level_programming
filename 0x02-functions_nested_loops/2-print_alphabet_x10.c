#include "main.h"

/**
 * print_alphabet_x10- prints the lower case alphabets on 10 lines
 *
 * return: returns nothing. void
 */
void print_alphabet_x10(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
	_putchar('\n');
}

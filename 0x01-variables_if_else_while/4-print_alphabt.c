#include<stdio.h>

/**
 * main- this function prints the lower case aplhabets except q and e.
 *
 * Return: this returns 0 on success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			c++;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}

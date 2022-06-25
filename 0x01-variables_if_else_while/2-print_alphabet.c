ginclude<stdio.h>

/**
 * main- this function prints the lower case aplhabets
 *
 * Return: this returns 0 on success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

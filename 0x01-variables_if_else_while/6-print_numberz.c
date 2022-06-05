#include<stdio.h>

/**
 * main- this prints single digit numbers using putchar
 *
 * Return: teturms 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}

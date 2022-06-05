#include<stdio.h>

/**
 * main- this program prints single digit base 10 numbers from 0
 *
 * Return: returns 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}

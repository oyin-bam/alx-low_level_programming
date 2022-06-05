#include<stdio.h>

/**
 * main- this prints lower case alphabets in reverse
 *
 * Return: returns 0 on success
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char temp;
	int i;
	int len;
	int indx;

	len = 0;
	indx = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	indx = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[indx];
		s[indx--] = temp;
	}
}

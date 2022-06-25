#include "main.h"

/**
 * _strncpy - this function copies a string into another string
 * @dest: string to be copied into
 * @src: string to be copied
 * @n: number of bytes of the string to be copied
 *
 * Return: this returns a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

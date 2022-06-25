#include "main.h"

/**
 * _strncat -  this function concatenates n bytes from the
 * second string to the first string
 * @dest: the first string to be concatenated to
 * @src: the string from which n bytes of it is concatenated to the first
 * @n: number of bytes from src to be joined to dest
 *
 * Return: this returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

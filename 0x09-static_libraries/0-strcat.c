#include "main.h"

/**
 * _strcat -  this function concatenates the two given strings together
 * @dest: the first given string
 * @src: the second given string
 *
 * Return: this returns a pointer to the concatenated resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}

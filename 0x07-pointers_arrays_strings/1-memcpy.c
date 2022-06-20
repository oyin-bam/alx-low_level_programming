#include "main.h"

/**
 * _memcpy- this function copies n bytes from memory
 * area src to memory area dest
 * @dest: memore area to be copied to
 * @src: memory area being copied from
 * @n: number of bytes to be copied from src to dest
 *
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

#include "main.h"

/**
 * _memset- this  fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: memory area being pointed to
 * @b: byte to be placed in each byte position of s
 * @n: number of bytes in s
 *
 * Return: this returns a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

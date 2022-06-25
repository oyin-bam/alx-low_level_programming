#include "main.h"

/**
 * _strchr- this function locates a character in a string
 * @s: string to be checked
 * @c: character we are searching for
 *
 * Return:this returns the first occurence if found and NULL if not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
		return (s - 1);
		}
		if (a == 0)
		{
			return ('\0');
		}
	}
}

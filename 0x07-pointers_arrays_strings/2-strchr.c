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
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			i++;
		}
		else
		{
			return (&s[i]);
		}
	}
	return ('\0');
}

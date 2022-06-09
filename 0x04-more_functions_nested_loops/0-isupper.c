#include "main.h"
/**
 * _isupper - this checks for upper case characters
 *
 * @c: character to be checked
 * Return: this returns 1 if uppercase and 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

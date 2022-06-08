#include "main.h"

/**
 * _isalpha - this checks for alphabets
 *
 * @c: letter to be checked
 * Return: this returns 1 f alphabet, else 0
 */
int _isalpha(int c)
{
	if (c >= 65  && c < 91 || c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

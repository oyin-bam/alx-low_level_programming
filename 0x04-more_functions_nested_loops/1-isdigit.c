#include "main.h"

/**
 * _isdigit - this checks if entered character is a digit between 0-9
 *
 * @c: character to be checked
 * Return: this returns 1 is it is a digit, else returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

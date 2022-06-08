#include "main.h"

/**
 * _islower - this checks for lower case character
 *
 *@c: value o be checked
 * Return: returns 1 if lower case, else returns 0
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

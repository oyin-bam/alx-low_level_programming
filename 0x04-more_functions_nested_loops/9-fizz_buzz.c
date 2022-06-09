#include "main.h"
#include <stdio.h>

/**
 * main - this prints the numbers 1 to 100 but prints fizz for
 * multiples of 3 and buzz for multiples of 5 then fizzbuzz
 * for multiples of 3 and 5
 *
 * Return: this returns 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("fizz ");
		}
		else if ((i % 3 != 0) && (i % 5 == 0))
		{
			printf("buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("fizzbuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}

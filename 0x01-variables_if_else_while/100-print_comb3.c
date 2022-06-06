#include<stdio.h>
/**
 * main- this program prints all possible different combinations of two digits
 *
 * Return: returns 0 on success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			while (i >= j)
			{
				j++;
			}
			if (i == 9)
			{
				break;
			}
			else
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}


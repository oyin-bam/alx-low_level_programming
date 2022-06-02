#include<stdio.h>

/**
 *main - entry point, prints the sizes of data types
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char c;
	float f;
	long int l;
	long long int ll;

	printf("size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(l));
	printf("size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(ll));
	printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}

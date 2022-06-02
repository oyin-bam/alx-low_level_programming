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

	printf("size of a char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(s)\n", sizeof(i));
	printf("size of a long int: %d byte(s)\n", sizeof(l);
	printf("size of a long long int: %d byte(s)\n", sizeof(ll);
	printf("size of a float: %d byte(s)\n", sizeof(f));

	return (0);
}

#include<stdio.h>

/**
 *main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char c;
	float f;
	long l;
	long long ll;

	printf("the size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("the size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("the size of a long int: %lu byte(s)\n" (unsigned long)sizeof(l));
	printf("the size of a long long int: %lu byte(s)\n" (unsigned long)sizeof(ll);
	printf("the size of a float: %lu byte(s)\n" (unsigned long)sizeof(f));
	return (0);
}

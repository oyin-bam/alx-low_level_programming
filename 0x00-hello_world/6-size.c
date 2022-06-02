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

	puts("the size of a char: %lu byte(s)", (unsigned long)sizeof(c));
	puts("the size of an int: %lu byte(s)", (unsigned long)sizeof(i));
	puts("the size of a long int: %lu byte(s)" (unsigned long)sizeof(l));
	puts("the size of a long long int: %lu byte(s)" (unsigned long)sizeof(ll);
	puts("the size of a float: %lu byte(s)" (unsigned long)sizeof(f));
	return (0);
}

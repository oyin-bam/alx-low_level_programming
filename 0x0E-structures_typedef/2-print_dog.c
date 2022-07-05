#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog- this prints details about the dog
 * @d: the pointer to your declared struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->age == NULL)
	{
		d->age = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}

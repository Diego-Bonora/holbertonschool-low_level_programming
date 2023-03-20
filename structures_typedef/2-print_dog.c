#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the dog structure
 * @d: structure input
 * Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(*d).name)
			(*d).name = "(nill)";
		if (!(*d).owner)
			(*d).owner = "(nill)";
		if ((*d).age <= 0)
		{
			printf("Name: %s\nAge: (nill)\nOwner: %s\n", d->name, d->owner);
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}

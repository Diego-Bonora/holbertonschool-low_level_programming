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
			(*d).name = "(nil)";
		if (!(*d).age)
			(*d).age = 0;
		if (!(*d).owner)
			(*d).owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

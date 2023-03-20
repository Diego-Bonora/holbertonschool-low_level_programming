#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the memory of dog
 * @d: input dog
 * Return: nothing
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}

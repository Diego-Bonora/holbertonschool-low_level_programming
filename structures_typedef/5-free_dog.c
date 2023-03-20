#include <stdio.h>
#include <stdlib>
#include "dog.h"
/**
 * free_dog - free the memory of dog
 * @d: input dog
 * Return: nothing
*/

void free_dog(dog_t *d)
{
	free((*d).nombre);
	free((*d).age);
	free((*d).owner);
	free(d);
}

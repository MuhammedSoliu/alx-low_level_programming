#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: the struct dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("name: (nil)");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("age: (nil)");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}

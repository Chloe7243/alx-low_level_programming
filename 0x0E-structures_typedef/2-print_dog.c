#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  prints a struct dog
 *
 * @d: struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "nil");
		d->age ? printf("Age: %f\n", d->age) : printf("Age: nil\n");
		printf("Owner: %s\n", d->owner ? d->owner : "nil");
	}
}

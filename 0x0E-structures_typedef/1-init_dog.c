#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *init_dog - function that initialize a variable of type struct "dog"
 *@d: pointer to struct dog
 *@name: pointer to var name type char
 *@age: var type float
 *@owner: pointer to var owner type char
 *Return: nothing
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
	else
		return;
}

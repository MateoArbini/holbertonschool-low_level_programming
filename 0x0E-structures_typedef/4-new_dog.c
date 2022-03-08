#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strlen - calculates the lenght of a given string
 *@str: string given
 *Return: i
 **/
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string
 * @str: pointer of a string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *new_str;
	int i = 0;

	if (str == NULL)
		return (NULL);

	new_str = malloc(sizeof(char) * _strlen(str) + 1);

	if (!new_str)
		return (NULL);

	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}

	new_str[i] = '\0';
	return (new_str);
}

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: the newly created dog
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t)); /*asign memory space for dog*/

	if (dog == NULL) /*validates new dog*/
	{
		return (NULL);
	}

	dog->name = _strdup(name); /*equlise name to new dogs name*/

	if (dog->name == NULL)
	{
		free(dog); /* frees space in case that new dogs name is NULL*/
		return (NULL);
	}

	dog->owner = _strdup(owner);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog); /*frees space if owners name is NULL*/
		return (NULL);
	}

	dog->age = age;
	return (dog); /*return new dog*/
}

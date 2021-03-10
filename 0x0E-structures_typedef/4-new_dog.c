#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str12 - ..
 * @s: ..
 * Return: ..
 */

int str12(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{

	}
	return (i);
}

/**
 * *new_dog - ..
 * @name: ..
 * @age: ..
 * @owner: ..
 * Return: ..
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *baby;
	int i;
	int len_name = str12(name);
	int len_owner = str12(owner);

/*crear y probar la copia de la estructura general*/
	baby = malloc(sizeof(dog_t));
	if (baby == NULL)
		return (NULL);
/*crear y probar la copia de name*/
	baby->name = malloc(len_name + 1);
	if (baby->name == NULL)
	{
		free(baby);
		return (NULL);
	}
/*asignar name a la nueva estructura*/
	for (i = 0; i < len_name; i++)
		baby->name[i] = name[i];
/* age */
	baby->age = age;
/* owner */
	baby->owner = malloc(len_owner + 1);
	if (baby->owner == NULL)
	{
		free(baby->name);
		free(baby);
		return (NULL);
	}
/*asignar owner a la nueva estructura*/
	for (i = 0; i < len_owner; i++)
		baby->owner[i] = owner[i];
	return (baby);
}

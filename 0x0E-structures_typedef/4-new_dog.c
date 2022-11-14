#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: owner of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int length;

	for (length = 0; src[length] != '\0'; length++)
	{
		dest[length] = src[length];
	}
	dest[length] = src[length];
	return (dest);
}
/**
 * _strlen - this function return the legth of a string
 *
 * @s: value
 *
 * Return: value
 */
{
	char n = 'a';
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	return (i - 1);
}
/**
 * new_dog - this funcion prints dog nfo
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}

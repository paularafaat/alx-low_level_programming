#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * *new_dog -creats new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: poimter to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n = strlen(name);
	int o = strlen(owner);

	dog = malloc(sizeof(doog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (n + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (o + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

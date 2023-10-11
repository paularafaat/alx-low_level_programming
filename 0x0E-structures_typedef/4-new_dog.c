#include "dog.h"
#include <stdio.h>
#include < stdlib.h>
/**
 * _strlen - fun to return the lenth
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - fun to copy str
 * @d: pointerr
 * @s: pointer
 * Return: pointer to string
 */
char _strcpy(char *d, char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{

		d[i] = s[i];
	}

	d[i] = '\0';
	return (d);
}
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
	int n = _strlen(name);
	int o = _strlen(owner);

	dog = malloc(sizeof(dog_t));
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
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

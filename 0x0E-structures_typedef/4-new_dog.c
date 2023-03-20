#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new variable of type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: A variable to type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int j = 0, k = 0, l;
	dog_t *dog;

	while (name[j] != '\0')
		j++;
	while (owner[k] != '\0')
		k++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(j * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (l = 0; l <= j; l++)
		dog->name[l] = name[l];
	dog->age = age;
	dog->owner = malloc(k * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (l = 0; l <= k; l++)
		dog->owner[l] = owner[l];
	return (dog);
}

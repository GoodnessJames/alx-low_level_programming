#include "dog.h"
#include <stdlib.h>

int str_len(char *str);
char *str_cpy(char *dest, char *src);

/**
 * str_len - Gets the length of a string @str
 * @str: The string to get the length
 *
 * Return: returns (len) on SUCCESS or (0) on FAILURE
 */
int str_len(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len + 1);
}

/**
 * str_cpy - Copies the content of src to dest
 * @dest: The destination buffer
 * @src: The source to copy from
 *
 * Return: returns (dest) on SUCCESS or (NULL) on FAILURE
 */
char *str_cpy(char *dest, char *src)
{
	int i;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * *new_dog - A new object for the structure dog_t
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of teh dog
 *
 * Return: returns (ptDog) on SUCCESS or (NULL) on FAILURE
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptDog;

	ptDog = malloc(sizeof(dog_t));

	if (ptDog == NULL)
		return (NULL);

	ptDog->name = malloc(sizeof(char) * (str_len(name)));
	ptDog->owner = malloc(sizeof(char) * (str_len(owner)));

	if (ptDog->name == NULL || ptDog->owner == NULL)
	{
		free(ptDog->name);
		free(ptDog->owner);
		free(ptDog);
		return (NULL);
	}
	ptDog->name = str_cpy(ptDog->name, name);
	ptDog->age = age;
	ptDog->owner = str_cpy(ptDog->owner, owner);

	return (ptDog);
}

#include "dog.h"
#include<stdlib.h>

/**
 * _strlen - returns the length of the string
 * @str: string
 * Return: the lenght of the string
 */

int _strlen(const char *str)
{
int L = 0;
while (*str++)
L = L + 1;
return (L);
}

/**
 * _strcpy - copies the string pointed to src
 * @dest: destination
 * @src: source
 * Description: copy
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - creates new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Description: new
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *dog;
int L1, L2;

L1 = _strlen(name);
L2 = _strlen(owner);
dog = malloc(sizeof(dog_t));

if (dog == NULL)
return (NULL);

(*dog).name = malloc(sizeof(char) * (L1 + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
(*dog).owner = malloc(sizeof(char) * (L2 + 1));
if ((*dog).owner == NULL)
{
free(dog);
free((*dog).name);
return (NULL);
}
_strcpy((*dog).name, name);
_strcpy((*dog).owner, owner);
(*dog).age = age;

return (dog);
}

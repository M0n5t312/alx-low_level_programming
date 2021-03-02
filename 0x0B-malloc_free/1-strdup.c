#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns length of string
 * @s: string to get length of
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strdup - copies given string into new memory
 * @str: string to be copied
 * Return: pointer to memory of copied str
 */
char *_strdup(char *str)
{
	int strlength = _strlen(str);
	int i = 0;
	char *strcp = malloc(sizeof(char) * strlength);

	if (str == NULL)
		return (NULL);
	while (i < strlength)
	{
		*(strcp + i) = *(str + i);
		i++;
	}
	return (strcp);
}

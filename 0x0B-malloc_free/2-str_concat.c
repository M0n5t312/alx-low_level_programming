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
 * str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: returns concatenated
 */
char *str_concat (char *s1, char *s2)
{
	int s1len = _strlen(s1);
	int s2len = _strlen(s2);
	int newlen = s1len + s2len;
	int i = 0, j = 0;
	char *newstr = malloc(sizeof(char) * newlen);

	if (newlen == 0)
		return (NULL);
	else
	{
		while (i < s1len)
		{
			*(newstr + i) = *(s1 + i);
			i++;
		}
		while (s1len < newlen)
		{
			*(newstr + s1len) = *(s2 + j);
			s1len++;
			j++;
		}
		return (newstr);
	}
}

#include "holberton.h"
/**
 * _strlen_recursion - finds the length of string
 * @s: string to find length of
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}

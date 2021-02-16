#include "holberton.h"
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
 * puts_half - prints half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i;
	int string_len = _strlen(str);

	if (string_len % 2 != 0)
		i = (string_len / 2) + 1;
	else
		i = string_len / 2;
	while (i < string_len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 * _puts - prints string on std output
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}

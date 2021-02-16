#include "holberton.h"
/**
 * puts2 - prints every other char
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i == 0)
			_putchar(*str);
		else if (i % 2 == 0)
			_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}

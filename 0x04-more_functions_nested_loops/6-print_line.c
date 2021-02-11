#include "holberton.h"

/**
 * print_line - prints a line using _
 * @a: length of line
 */

void print_line(int a)
{
	int i;

	if (a <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < a; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

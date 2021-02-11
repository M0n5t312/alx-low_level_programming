#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0 - 9 except 4 and 2
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2)
			continue;
		else if (i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}

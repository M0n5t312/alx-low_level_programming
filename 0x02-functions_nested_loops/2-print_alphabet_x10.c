#include "holberton.h"

/**
 * print_alphabet_x10 - prints all letters of alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}

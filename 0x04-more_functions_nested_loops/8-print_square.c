#include "holberton.h"
/**
 * print_square - prints square usin #
 * @a: size of square
 */

void print_square(int a)
{
	int i, j;

	if (a == 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = a; j > 0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

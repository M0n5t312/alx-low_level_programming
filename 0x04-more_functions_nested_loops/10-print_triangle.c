#include "holberton.h"
/**
 * print_triangle - print triangle using #
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, k, j;

	if (size <= 0)
		_putchar('\n');
	else
	{

		for (i = 0; i <= size; i++)
		{
			for (j = size; j >= 0; j--)
			{
				if (j == i)
				{
					for (k = 0; k < j; k++)
					{
						_putchar('#');
					}
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

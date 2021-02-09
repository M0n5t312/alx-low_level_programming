#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers to 98
 * @n: natural number to start printing from
 */
void print_to_98(int n)
{
	if ((n >= 0) && (n <= 98))
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
		printf("%i\n", n);
	}
	else if ((n > 0) && (n > 98))
	{
		while(n > 98)
		{
			printf("%i, ", n);
			n--;
		}
		printf("%i\n", n);
	}
	else if (n < 0)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
		printf("%i\n", n);
	}
}

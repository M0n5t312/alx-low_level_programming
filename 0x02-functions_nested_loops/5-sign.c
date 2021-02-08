#include "holberton.h"
/**
 * print_sign - checks sign of integer
 * @n: integer to be tested
 * Return: 1 if more than 0 else 0 if equals 0 otherwise - if less than 0
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = -1;
		_putchar('-');
	}
	return (result);
}

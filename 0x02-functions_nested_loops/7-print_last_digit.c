#include "holberton.h"
/**
 * print_last_digit - prints last digit of number
 * @a: number to get last digit of
 * Return: value of last digit
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
		b = (a * -1) % 10;
	else
		b = a % 10;
	_putchar(b + 48);
	return (b);
}

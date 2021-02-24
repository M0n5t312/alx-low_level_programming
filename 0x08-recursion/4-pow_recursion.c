#include "holberton.h"
/**
 * _pow_recursion - calculates the value of an int raised to a power
 * @x: integer to calculate power of
 * @y: power of integer
 * Return: value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return -1;
	if (y == 0)
		return 1;
	return (x * _pow_recursion(x, y - 1));
}

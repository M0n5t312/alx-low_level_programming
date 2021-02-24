#include "holberton.h"
/**
 * factorial - calculates the factorial of a number
 * @n: number to calculate factorial of
 * Return: factorial of number 
 */
int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	return (n * factorial(n - 1));
}

#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals in a square matrix
 * @a: array with the matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sumd1 = 0;
	int sumd2 = 0;

	for (i = 0; i < size; i++)
	{
		j = (i * size) + i;
		sumd1 += a[j];
	}
	for (i = 1; i <= size; i++)
	{
		j = (i * size) - i;
		sumd2 += a[j];
	}
	printf("%d, %d\n", sumd1, sumd2);
}

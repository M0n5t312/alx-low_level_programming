#include <stdio.h>
/**
 * print_array - prints all elements of an array
 * @a: array to be printed
 * @n: size of array
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
		printf("%d \n", a[i]);
}

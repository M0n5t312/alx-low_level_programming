#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checker - allocates memory using malloc
 * @b: size of memory to be allocated
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(sizeof(int) * b);

	if (s == NULL)
		exit (98);
	else
		return (s);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of fixed sized chars
 * @size: size of array
 * @c: character
 * Return: returns NULL if array size 0, array pointer or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(sizeof(int) * size);
	unsigned int i = 0;

	if (size == 0)
		return NULL;
	else
	{
		while (i < size)
		{
			*(ar + i) = c;
			i++;
		}
		return ar;
	}
}

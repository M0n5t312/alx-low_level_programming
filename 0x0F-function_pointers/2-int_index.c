#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search int from
 * @size: size of array
 * @cmp:function to compare values
 * Return: -1if no elements or size less than zero else return int
 */
 int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);

	return (-1);

}

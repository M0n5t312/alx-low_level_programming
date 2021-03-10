#include "function_pointers.h"
/**
 * array_iterator - executes function for each array element
 * @array: array
 * @size: size of array
 * @action: fuction to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

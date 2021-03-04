#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory to an array
 * @nmemb: number of elements of array
 * @size: size of each elements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i; /* match unsigned arguments */

	if (nmemb <= 0 || size <= 0) /* validate input */
		return (NULL);

	/* allocate memory and check if error */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* set allocated memory values to 0 */
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0; /* type cast assigning values*/

	return (ptr);
}

#include <stdio.h>
/**
 * reverse_array - reverses the contents of an array
 * @a: an array with contents to be reversed
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
		i++;
		j--;
	}
}

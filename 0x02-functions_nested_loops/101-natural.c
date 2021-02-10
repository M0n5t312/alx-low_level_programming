#include <stdio.h>

/**
 * main - calculates the sum of all multiples of 3 and 5 in 1024
 * Return: Always 0
 */
int main(void)
{
	int result_3, result_5, count;

	for (count = 0; count < 1023; count++)
	{
		if (count % 3 == 0)
			result_3 = result_3 + (count / 3);
		if (count % 5 == 0)
			result_5 = result_5 + (count / 5);
	}
	printf("%i\n", result_3 + result_5);
	return (0);
}

#include <stdio.h>

/**
 * main - calculates the sum of all multiples of 3 and 5 in 1024
 * Return: Always 0
 */
int main(void)
{
	int result_3, result_5, count;

	for (count = 0; count <= 1024; count++)
	{
		if (count % 3 == 0)
			result_3 += count / 3;
		else if (count % 5 == 0)
			result_5 += count / 5;
	}
	printf("Sum of multiples of 3 and 5 is : %i\n", result_3 + result_5);
	return (0);
}

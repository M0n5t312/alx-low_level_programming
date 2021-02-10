#include <stdio.h>

/**
 * main - print fibonacci numbers (50)
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long long int i, first_fib, second_fib;
	unsigned long long int sum;

	first_fib = 1;
	second_fib = 2;

	printf("%llu, %llu, ", first_fib, second_fib);
	for (i = 0; i < 48; i++)
	{
		sum = first_fib + second_fib;
		printf("%llu, ", sum);
		first_fib = second_fib;
		second_fib = sum;
	}
	printf("\n");
	return (0);
}

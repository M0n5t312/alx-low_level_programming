#include <stdio.h>
/**
 * main - prints numbers from 1 -100 with fizz buzz for multiples of 3 and 5
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%i ", i);
	}
	printf("\n");

	return (0);
}

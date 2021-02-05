#include <stdio.h>
/**
 * main - display numbers in 00....99
 * Return: Always  0 (success)
 */
int main(void)
{
	int first_dig;
	int second_dig;

	for (first_dig = 48; first_dig <= 57; first_dig++)
	{
		for (second_dig = 48; second_dig <= 57; second_dig++)
		{
			putchar(first_dig);
			putchar(second_dig);
			if (!(first_dig == 57 && second_dig == 57))
			{
				putchar(32);
				putchar(44);
			}
		}
	}
	putchar('\n');
	return (0);
}

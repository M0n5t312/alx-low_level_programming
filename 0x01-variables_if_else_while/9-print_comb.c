#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit = '0';

	while (first_digit <= '9')
	{
		putchar(first_digit);
		if (first_digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
		first_digit++;		
	}
	putchar('\n');
	return (0);
}

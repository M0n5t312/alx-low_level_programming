#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit;

	for (first_digit = 48; first_digit <= 56; first_digit++)
	{
		putchar(first_digit);
		putchar(32);
		putchar(44);
	}
	putchar(57);
	return (0);
}

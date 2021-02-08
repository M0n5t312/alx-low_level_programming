#include "holberton.h"
/**
 * print_alphabet - prints all small letter alphabets
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

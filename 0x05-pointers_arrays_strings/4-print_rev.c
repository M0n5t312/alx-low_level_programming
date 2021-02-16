#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int slen = 0;
	char ch[100];

	while (*s != '\0')
	{
		ch[slen] = *s;
		slen++;
		s++;
	}
	while (slen >= 0)
	{
		_putchar(ch[slen]);
		slen--;
	}
	_putchar('\n');
}

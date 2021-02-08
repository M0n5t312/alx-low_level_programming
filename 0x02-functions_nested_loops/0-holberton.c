#include <stdio.h>
#include "holberton.h"

/**
 * main - prints "holberton"
 * Return: 0 (Success)
 */
int main(void)
{
	char name[] = "Holberton";
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

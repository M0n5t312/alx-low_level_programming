#include <stdio.h>
#include "holberton.h"
/**
 * main - prints all arguments it recieves
 * @args: counter
 * @argv: array
 * Return: 0 Success
 */
int main(int args, char *argv[])
{
	int i;

	for (i = 0; i < args; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

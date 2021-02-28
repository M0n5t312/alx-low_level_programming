#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - multiplies two numbers
 * @argc: counter
 * @argv: array
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1 = atoi(*(argv + 1));
		int num2 = atoi(*(argv + 2));

		printf("%d\n", num1 * num2);
	}
	else if (argc < 3 || argc > 3)
		printf("Error\n");
	return (1);
}

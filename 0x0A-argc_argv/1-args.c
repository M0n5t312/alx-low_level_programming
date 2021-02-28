#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the number of arguments passed to it
 * @argc: count
 * @argv: array
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

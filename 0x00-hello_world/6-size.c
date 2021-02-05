#include<stdio.h>
/**
 * main - print size of c variables
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	char c;
	float floatType;
	long long int lng;
	long int lngint;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lngint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lng));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}

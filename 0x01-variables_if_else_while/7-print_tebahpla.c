#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int first = 'a';
	int last;

	for (last = 'z'; last >= first; last--)
		putchar(last);
	putchar('\n');
	return (0);
}

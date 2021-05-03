/**
 * _memset - fills memory with bytes of chars
 * @s: pointer to memory to be filled
 * @b: char to fill memory
 * @n: number of bytes to be filled in memory
 * Return: pointer to filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

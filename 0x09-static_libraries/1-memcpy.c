/**
 * _memcpy - copies bytes from one memory to another
 * @dest: memory to be copied to
 * @src: memory to be copied from
 * @n: bytes of memory to be copied
 * Return: dest filled with copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

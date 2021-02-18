/**
 * _strncpy - copies string of n size
 * @dest: destination string
 * @src: source string
 * @n: size of string
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[j] = src[i];
		}
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

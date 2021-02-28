/**
 * _strncat - concatenates srings of n size
 * @dest: destination string
 * @src: source string
 * @n: size of src string
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int src_size = 0;
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (src_size < n)
		{
			dest[i] = src[j];
		}
		src_size++;
		j++;
		i++;
	}
	return (dest);
}

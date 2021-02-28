#define NULL 0
/**
 * _strchr - locates a char in a string
 * @s: string to check for char
 * @c: char to search in string
 * Return: char if found or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c)
	{
		i++;
	}
	if (s[i] == '\0')
		s = NULL;
	else
		s = &s[i];
	return (s);
}

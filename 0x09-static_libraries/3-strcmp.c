/**
 * _strcmp - compare 2 string
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: ASCII Value of strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int total;

	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] ==  '\0' || s2[i] == '\0')
		total = 0;
	else if (s1[i] > s2[i])
		total = 15;
	else if (s1[i] < s2[i])
		total = -15;
	return (total);
}

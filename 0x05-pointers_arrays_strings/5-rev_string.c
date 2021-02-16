/**
 * rev_string - reverses string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int slen = 0, i = 0;
	char ch[100];

	while (*s != '\0')
	{
		ch[slen] = *s;
		slen++;
		s++;
	}
	while (slen >= 0)
	{
		s[i] = ch[slen];
		slen--;
		i++;
	}
}

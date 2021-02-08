/**
 * _islower - checks if char is lower case or not
 * @c: the char to be checked
 *Return: 1 if true otherwise 0
 */
int _islower(int c)
{
	int result;

	if ((c >= 97) && (c <= 122))
		result = 1;
	else
		result = 0;
	return (result);
}

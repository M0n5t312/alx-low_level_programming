/**
 * _isdigit - checks if input is digit
 * @a: input to be checked
 * Return: 0 if not int, 1 otherwise
 */

int _isdigit(int a)
{
	int result;

	if (a >= 48 && a <= 57)
		result = 1;
	else
		result = 0;
	return (result);
}

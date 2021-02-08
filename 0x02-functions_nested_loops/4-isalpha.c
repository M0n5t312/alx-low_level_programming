/**
 * _isalpha - function that checks if input is alphabet or not
 * @c: input to be checked
 * Return: 1 if is alphabet otherwise 0
 */
int _isalpha(int c)
{
	int result;

	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		result = 1;
	else
		result = 0;
	return (result);
}

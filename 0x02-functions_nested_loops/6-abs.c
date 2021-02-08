/**
 * _abs - computes absolute value of int
 * @a: int  value to be to be computed absolute value of
 * Return: albsolute value of a
 */
int _abs(int a)
{
	int absValue;

	if (a < 0)
		absValue = a * -1;
	else if (a >= 0)
		absValue = a;
	return (absValue);
}

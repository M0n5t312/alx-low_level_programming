#include "holberton.h"
/**
 * jack_bauer - displays 24 hours and minutes
 */
void jack_bauer(void)
{
	int h1 = 0, h2 = 0, m1, m2 = 0;

	for (m1 = 0; m1 <= 9; m1++)
	{
		_putchar(h2 + 48);
		_putchar(h1 + 48);
		_putchar(' ');
		_putchar(':');
		_putchar(' ');
		_putchar(m2 + 48);
		_putchar(m1 + 48);
		_putchar('\n');
		if ((m1 == 9) && (m2 < 5))
		{
			m2 = m2 + 1;
			m1 = 0;
		}
		if ((m1 == 9) && (m2 == 5) && (h1 < 9) && (h2 <= 1))
		{
			h1 = h1 + 1;
			m1 = 0;
			m2 = 0;
			_putchar(h2 + 48);
			_putchar(h1 + 48);
			_putchar(' ');
			_putchar(':');
			_putchar(' ');
			_putchar(m2 + 48);
			_putchar(m1 + 48);
			_putchar('\n');
		}
		else if ((m1 == 9) && (m2 == 5) && (h2 == 2))
		{
			if (h1 < 3)
			{
				h1 = h1 + 1;
				m1 = 0;
				m2 = 0;
				_putchar(h2 + 48);
				_putchar(h1 + 48);
				_putchar(' ');
				_putchar(':');
				_putchar(' ');
				_putchar(m2 + 48);
				_putchar(m1 + 48);
				_putchar('\n');
			}
		}
		if ((m1 == 9) && (m2 == 5) && (h1 == 9) && (h2 < 1))
		{
			h2 = h2 + 1;
			h1 = 0;
			m2 = 0;
			m1 = 0;
			_putchar(h2 + 48);
			_putchar(h1 + 48);
			_putchar(' ');
			_putchar(':');
			_putchar(' ');
			_putchar(m2 + 48);
			_putchar(m1 + 48);
			_putchar('\n');
		}
		if ((m1 == 9) && (m2 == 5) && (h1 == 9) && (h2 == 1))
		{
			h2 = h2 + 1;
			h1 = 0;
			m2 = 0;
			m1 = 0;
			_putchar(h2 + 48);
			_putchar(h1 + 48);
			_putchar(' ');
			_putchar(':');
			_putchar(' ');
			_putchar(m2 + 48);
			_putchar(m1 + 48);
			_putchar('\n');
		}
	}
}

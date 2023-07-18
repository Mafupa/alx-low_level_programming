#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the n time table
 */
void print_times_table(int n)
{
	int s, t, p;

	if (n < 0 || n > 15)
		return;

	for (s = 0; s <= n; s++)
	{
		_putchar('0');
		for (t = 1; t <= n; t++)
		{
			_putchar(',');
			_putchar(' ');

			p = s * t;
			if (p <= 99)
				_putchar(' ');
			if (p <= 9)
				_putchar(' ');

			if (p >= 100)
			{
				_putchar((p / 100) + '0');
				_putchar(((p / 10)) % 10 + '0');
			}
			else if (p <= 99 && p >= 10)
			{
				_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');

		}
		_putchar('\n');
	}
}

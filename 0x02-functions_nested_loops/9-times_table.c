#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int t, n, x;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n < 10; n++)
		{
			if (n != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			x = t * n;
			if (x < 10 && n != 0)
				_putchar(' ');
			else
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}

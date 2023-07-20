#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}

	if (m / 10)
	{
		print_number(m / 10);
	}

	_putchar((n1 % 10) + '0');
}

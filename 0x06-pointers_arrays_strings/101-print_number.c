#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 */
void print_number(int n)
{
	int n1, d = 10, l = 0;
	char *s;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	while (n > 0)
	{
		s[l] = ((n % d) + '0');
		n -= n % d;
		d *= 10;
		l++;
	}
	while (l > 0)
	{
		_putchar(s[l]);
		l--;
	}
}

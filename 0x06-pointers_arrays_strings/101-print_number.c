#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 */
void print_number(int n)
{
	int d = 10, l = 0;
	char *s;

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

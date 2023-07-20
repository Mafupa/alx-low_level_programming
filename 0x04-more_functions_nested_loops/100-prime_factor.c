#include "main.h"
#include <stdio.h>

/**
 * main - find the largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143, d = 2, bg = 0;

	while (n > 1)
	{
		while (n % d == 0)
		{
			if (d > bg)
				bg = d;
			n = n / d;
		}
		d = d + 1;
	}
	printf("%ld", bg);
	return (0);
}

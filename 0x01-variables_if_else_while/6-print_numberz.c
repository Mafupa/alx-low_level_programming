#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return:0
 */
int main(void)
{
	int cur = 0;

	for (; cur < 10; cur++)
	{
		putchar(cur + '0');
	}
	putchar('\n');
	return (0);
}

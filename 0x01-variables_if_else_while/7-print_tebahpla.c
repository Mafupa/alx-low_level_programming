#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 *
 * Return:0
 */
int main(void)
{
	char cur = 'z';

	for (; cur >= 'a'; cur--)
	{
		putchar(cur);
	}
	putchar('\n');
	return (0);
}

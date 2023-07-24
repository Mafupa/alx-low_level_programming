#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;

	for (; len >= 0; len--)
		printf("%c", s[len]);
	printf("\n");
}

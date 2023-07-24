#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int l = 0, p;

	while (str[l])
		l++;
	p = l / 2;

	for (; p < l; p++)
		printf("%c", str[p]);
	printf("\n");
}

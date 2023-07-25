#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate password
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char *s;

	srand(time(NULL));
	s = malloc(sizeof(char) * 16);
	for (; i < 16; i++)
		s[i] = (rand() % 127) + '0';
	printf("%s", s);
	free(s);
	return (0);
}

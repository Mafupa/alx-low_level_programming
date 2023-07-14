#include <stdlib.h>
#include <time.h>

/**
 * main - says if a random number is negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%i is negative");
	else if (n > 0)
		printf("%i is positive");
	else
		printf("%i is zero");
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of coins needed
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int amount, state = 0, min = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");

	amount = atoi(argv[1]);
	do {
		int new = amount / coins[state];
		amount -= new * coins[state];
		state++;
		min += new;

	} while (amount > 0);
	printf("%i\n", min);

	return (0);
}

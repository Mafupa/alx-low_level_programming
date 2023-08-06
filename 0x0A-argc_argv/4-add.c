#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of two arguments
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 1 if error, 0 otherwise
 */
int main(int argc, char* argv[])
{
	int i = 1, j = 0, sum = 0;

	for (; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%i\n", sum);
	return (0);
}

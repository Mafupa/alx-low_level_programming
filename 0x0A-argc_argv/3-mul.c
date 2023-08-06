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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

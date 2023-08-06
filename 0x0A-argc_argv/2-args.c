#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char* argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

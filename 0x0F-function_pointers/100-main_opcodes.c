#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int byteSize, i;
	char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	byteSize = atoi(argv[1]);
	if (byteSize < 0)
	{
		printf("Error\n");
		return (2);
	}
	opcode = (char *)main;
	for (i = 0; i < byteSize; i++)
	{
		if (i == byteSize - 1)
		{
			printf("%02hhx", opcode[i]);
			break;
		}
		printf("%02hhx ", opcode[i]);
	}
	printf("\n");
	return (0);
}

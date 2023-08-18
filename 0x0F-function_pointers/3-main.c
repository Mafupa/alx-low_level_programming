#include "3-calc.h"

/**
 * main - evaluate an operation
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*eval)(int, int);
	int ans;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	eval = get_op_func(argv[2]);
	if (!eval)
	{
		printf("Error\n");
		return (98);
	}
	ans = eval(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", ans);
	return (0);
}

#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * print - prints a char *
 * @s: the char *
 */
void print(char *s)
{
	while (*s)
		_putchar(*s++);
}

/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}

	if (m / 10)
	{
		print_number(m / 10);
	}

	_putchar((m % 10) + '0');
}

/**
 * check_digits - check is a string is made of digits
 * @s: the string
 * Return: 0 if s only has digits, 1 otherwise
 */
int check_digits(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] > '9' || s[i] < '0')
			return (1);
		i++;
	}
	return (0);
}

/**
 * _atoi - convert a string to an integer
 * @s: the string
 *
 * Return: conversted string as an int
 */
unsigned int _atoi(char *s)
{
	unsigned int num = 0;
	unsigned int i = 0, sign = 1;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - '0');
		else if (num > 0)
			break;
		i++;
	}
	return (num * sign);
}



/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0, 98 if arguments are not  composed of digits
 */
int main(int argc, char **argv)
{
	unsigned int result;

	if (argc != 3)
	{
		print("Error\n");
		exit(98);
	}
	if (check_digits(argv[1]) + check_digits(argv[2]) > 0)
	{
		print("Error\n");
		exit(98);
	}
	result = _atoi(argv[1]) * _atoi(argv[2]);
	print_number(result);
	_putchar('\n');
	return (0);
}


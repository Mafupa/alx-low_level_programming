#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to the concatenated string, NULL if error
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, w = 0, size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	str = malloc(sizeof(char) * size + ac);
	if (str == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[w] = av[i][j];
			w++;
		}
		str[w] = '\n';
		w++;
	}
	str[w] = '\0';
	return (str);
}

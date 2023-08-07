#include <stdlib.h>
#include <stddef.h>

/**
 * strtow - splits string into words
 * @str: the string
 * Return: Pointer to array of words
 */
char **strtow(char *str)
{
	int i, j = 0, c = 0, array_size = 1, flag = 1, wsize = 0;
	char **array;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			array_size++;
	}
	array = (char **)malloc(sizeof(char) * array_size);
	for (i = 0; str[i]; i++)
	{
		if (flag == 1)
		{
			for (wsize = 0; str[i + wsize] != ' '; wsize++)
				continue;
			array[j] = (char *)malloc(sizeof(char) * wsize + 1);
			flag = 0;
		}
		if (str[i] == ' ')
		{
			while (str[i + 1] == ' ')
				i++;
			if (c >= 0)
			{
				array[j][c] = '\0';
				j++;
				c = 0;
				flag = 1;
				continue;
			}
		}
		array[j][c] = str[i];
		c++;
	}
	return (array);

}

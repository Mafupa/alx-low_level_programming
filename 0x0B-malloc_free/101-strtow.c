#include <stdlib.h>
#include <stddef.h>

/**
 * word_count - count words in a string
 * @str: the string
 * Return: the number of words in str
 */
int word_count(char *str)
{
	int count = 0, i = 0, flag = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			count++;
			flag = 1;
		}
	}
	return (count);
}
/**
 * strtow - splits string into words
 * @str: the string
 * Return: Pointer to array of words
 */
char **strtow(char *str)
{
	int i = 0, j, c_count = 0, wrd_count = 0, flag = 0, wrd_start = 0, w = 0;
	char **array;

	for (i = 0; str[i]; i++)
		c_count++;
	wrd_count = word_count(str);
	if (wrd_count == 0)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (wrd_count + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= c_count; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (flag == 1)
			{
				array[w] = (char *)malloc(sizeof(char) * (i - wrd_start) + 1);
				if (array[w] == NULL)
				{
					/* Dealocate */
				}
				for (j = 0; j < (i - wrd_start); j++)
					array[w][j] = str[wrd_start + j];
				array[w][j] = '\0';
				w++;
			}
			flag = 0;
		}
		else if (flag == 0)
		{
			wrd_start = i;
			flag = 1;
		}
	}
	array[w] = NULL;
	return (array);
}

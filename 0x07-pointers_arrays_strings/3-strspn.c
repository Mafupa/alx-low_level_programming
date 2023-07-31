/**
 * _strspn - gets the lenght of a prefix substring
 * @s: the string
 * @accept: the substring
 * Return: Number of bytes in s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, count = 0, init_count = 0;

	while (s[i])
	{
		init_count = count;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
		if (init_count == count)
			return (count);
		i++;
	}
	return (0);
}

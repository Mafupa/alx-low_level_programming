/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if they are the same,
 * less than 0 if s1 if less than s2 and more than 0 if s1 is more than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] == s2[j])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
		j++;
	}
	return (s1[i] - s2p[j]);
}

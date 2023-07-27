/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 * Return: Pointer to the string
 */
char *cap_string(char *s)
{
	int i = 0, j = 0, spe = 1;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	while (s[i])
	{
		if (spe == 1 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		spe = 0;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				spe = 1;
				break;
			}
		}
		i++;
	}
	return (s);
}

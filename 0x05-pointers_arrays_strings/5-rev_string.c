/**
 * rev_string - reverses a string
 * @s: the string
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char t;

	while (s[len] != '\0')
		len++;

	for (; i < len / 2; i++)
	{
		t = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = t;
	}
}

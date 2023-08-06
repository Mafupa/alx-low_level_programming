/**
 * _strncat -  concatenates two strings, only takes n bytes from the source
 * @dest: destination string
 * @src: source string
 * @n: source bytes
 * Return: Pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j] && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copied
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

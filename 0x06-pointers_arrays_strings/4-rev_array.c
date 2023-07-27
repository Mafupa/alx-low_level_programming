/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the array's size
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, tmp;

	for (; i < n / 2; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

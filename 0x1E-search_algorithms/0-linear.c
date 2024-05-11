
/**
 * linear_search - search for a value in an array
 *
 * @array: array
 * @size: size of array
 * @value: value searched
 * Return: index of value, -1 if array is NULL or value not in array
 */
int linear_search(int *array, size_t size, int value){
	size_t i;

	if(!array)
		return (-1);
	for(i = 0; i < size; i++){
		if(array[i] == value)
			return (i);
	}
	return (-1);
}

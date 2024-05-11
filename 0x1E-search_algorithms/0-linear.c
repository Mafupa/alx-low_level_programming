
/**
 * linear_searc
 * @array: array
 * @size: size of array
 * @value: value searched
 * Returns: index of value, -1 if array is NULL or value not in array
 */
int linear_search(int *array, size_t size, int value){
	if(!array)
		return -1;
	for(size_t i = 0; i < size; i++){
		if(array[i] == value)
			return i;
	}
	return -1;
}

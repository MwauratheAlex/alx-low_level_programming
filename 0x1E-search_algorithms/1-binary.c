#include <stdio.h>

/**
 * print_array - prints an array of integers
 *
 * @array: array to print
 * @start: index to start printing array from
 * @end: indext of last value to be printed in array
 *
 * Return: nothing
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	for (i = start; i <= end; i++)
		printf("%d%s", array[i], i == end ? "" : ", ");
	printf("\n");
}

/**
 * binary_search_helper - searches for a value in a sorted array of integers
 * recursively, using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @start: index indicating where to start the search in array
 * @end: index indicating where to stop the search in array
 * @value: the value to search for
 *
 * Return: the index where value is located or,
 * -1 If value is not present in array or if array is NULL
 */
int binary_search_helper(int *array, size_t start, size_t end, int value)
{
	int middle_idx = ((start + end) / 2);

	if (start > end)
		return (-1);

	printf("Searching in array: ");
	print_array(array, start, end);

	if (array[middle_idx] == value)
		return (middle_idx);
	else if (array[middle_idx] < value)
		return (binary_search_helper(array, middle_idx + 1, end, value));
	else
		return (binary_search_helper(array, start, middle_idx - 1, value));
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or
 * -1 If value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_helper(array, 0, size - 1, value));
}

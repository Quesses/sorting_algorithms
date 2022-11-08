#include "sort.h"

/**
 * selection_sort- implements the selection sort algorithm on an integer array
 *
 * @array: array of integers
 * @size: the size of the given array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, min, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	j = 0;
	while (j < size - 1)
	{
		min = j;
		i = j + 1;
		while (i < size)
		{
			if (array[min] > array[i])
				min = i;
			i += 1;
		}
		if (j != min)
		{
			temp = array[j];
			array[j] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
		j += 1;
	}
}

#include "sort.h"

/**
 * bubble_sort- implements the bubble sort algorithm on an array of integers
 *
 * @array: array of integers
 * @size: the size of the given array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j = size;
	int tmp, flag = 1;

	if (array == NULL || size < 2)
		return;
	while (j > 0 && flag)
	{
		flag = 0;
		for (i = 0; i < (j - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				flag = 1;
			}
		}
		j -= 1;
	}
}

#include "sort.h"


/**
 * partition- implements the Lomuto partition scheme
 *		uses the last element as the pivot
 *
 * @array: array of integers
 * @lo: lowest in index of the sorting array
 * @hi: highest index of the sorting array (pivot)
 * @size: the size of the given array
 *
 * Return: returns the final index of the pivot
 */
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t i, j;
	int temp, pivot;

	pivot = array[hi];
	j = lo - 1;
	for (i = lo; i < hi; i++)
	{
		if (array[i] < pivot)
		{
			j++;
			if (j != i)
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[hi] < array[j + 1])
	{
		array[hi] = array[j + 1];
		array[j + 1] = pivot;
		print_array(array, size);
	}
	return (j + 1);
}


/**
 * quicksort- calls the partition func to implement quick sort
 *
 * @array: array of integers
 * @lo: lowest in index of the array
 * @hi: highest index of the array (pivot)
 * @size: the size of the given array
 */
void quicksort(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t pivot;

	if (hi > lo)
	{
		pivot = partition(array, lo, hi, size);

		quicksort(array, lo, pivot - 1, size);
		quicksort(array, pivot + 1, hi, size);
	}
}


/**
 * quick_sort- implements the quick sort algorithm on an integer array
 *	the function implements the Lomuto partition scheme
 *
 * @array: array of integers
 * @size: the size of the given array
 */
void quick_sort(int *array, size_t size)
{
	ssize_t hi = size - 1;

	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, hi, size);
}


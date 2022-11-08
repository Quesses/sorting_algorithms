#include "sort.h"

/**
 * quick_sort- implements the quick sort algorithm on an integer array
 *	the function implements the Lomuto partition scheme
 *
 * @array: array of integers
 * @size: the size of the given array
 */
void quick_sort(int *array, size_t size)
{
	size_t hi, lo, j;
	int temp;

	if (array == NULL || size < 2)
		return;

}

/**
 * partition- implements the Lomuto partition scheme
 *		uses the last element as the pivot
 *
 * @array: array of integers
 * @lo: lowest in index of the array
 * @hi: highest index of the array (pivot)
 * @size: the size of the given array
 *
 * Return: returns the final index of the pivot
 */
size_t partition(int *array, size_t lo, size_t hi, size_t size)
{
	return (0);
}

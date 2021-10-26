#include"sort.h"
void swap(int *xp, int *yp);
/**
 * swap - function that swapto number.
 * @xp: first nmber.
 * @yp: second number.
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 * partition - finds the partition for the quicksort using the Lomuto scheme
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @hi: highest index of the partition to sort
 * @size: size of the array
 *
 * Return: index of the partition
 */
size_t partition(int *array, size_t lo, size_t hi, size_t size)
{
	size_t i, j;
	int pivot;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			if (++i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[hi])
	{
		swap(&array[i + 1], &array[hi]);
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quicksort - sorts a partition of an array of integers
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @hi: highest index of the partition to sort
 * @size: size of the array
 *
 * Return: void
 */
void quicksort(int *array, int lo, int hi, size_t size)
{
	size_t pivot;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		quicksort(array, lo, pivot - 1, size);
		quicksort(array, pivot + 1, hi, size);
	}
}
/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm.
 * @array: array of integers.
 * @size: the size of the array.
 * Return: nothing.
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}

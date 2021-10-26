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
 * selection_sort - function that sorts an array  using the Selection sort.
 * @array: table of array.
 * @size: size of array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		if (min_idx != i)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}

#include "sort.h"
/**
 * shell_sort - sorts an array of integers in ascending order using the
 * Shell sort algorithm
 * @array: array to sort
 * @size: size of the array to sort
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t  i, j;
	size_t gap = 1;
	int temp;

	if (array == NULL || size < 2)
	{
		return;
	}
	while (gap < size / 3)
	{
		gap  = gap * 3 + 1;
	}
	while (gap > 0)
	{
		for (i = gap; i < size; i += 1)
		{
			temp = array[i];
			j = i;
			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j = j - gap;
			}
			array[j] = temp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}

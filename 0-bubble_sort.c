#include "sort.h"

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
 * bubble_sort - function sorts an array in ascending using the Bubble sort.
 * @array: table of array
 * @size: size of array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int sw = 1;

	while (sw == 1)
	{
		sw = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap(&array[i], &array[i - 1]);
				sw = 1;
				print_array(array, size);
			}
		}
	}
}

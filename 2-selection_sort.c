#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - sort in ascending order
 * @array: the array to sort
 * @size: the size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_id;
	int num;

	num = 0;
	for (i = 0; i < size; i++)
	{
		min_id = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_id])
				min_id = j;
		}

		if (min_id != i)
		{
			num = array[min_id];
			array[min_id] = array[i];
			array[i] = num;
			print_array(array, size);
		}
	}
}

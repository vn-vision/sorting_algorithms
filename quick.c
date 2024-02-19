#include "sort.h"
#include <stdio.h>

/**
 * quick_sort - implements lomuto partition scheme
 * @array: the array to sort
 * @size: the size of the array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	int pivot, temp;
	size_t i, j;
	j = 0;

	pivot = array[size - 1];

	for (i = 0; i < size- 1; i++ )
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[i] >= pivot)
			{
				j++;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);

			}
		}
	}
}

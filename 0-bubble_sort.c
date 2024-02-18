#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - ascending order
 * @array: the numbers to sort
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int temp, swapped;
	size_t i, j;

	temp = 0;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}

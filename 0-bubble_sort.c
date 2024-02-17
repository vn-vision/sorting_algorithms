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
	int temp;
	size_t i, j;

	temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}

		printf("\n");
		for (j = 0; j < size; j++)
		{

			printf("%d", array[j]);
			if (j != size - 1)
				printf(", ");
		}
	}
}

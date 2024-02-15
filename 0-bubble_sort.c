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
	size_t i, j, k;

	temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		for(j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
			for (k = 0; k < size; k++)
				printf("%d", array[k]);
			printf("\n");
		}
	}
}

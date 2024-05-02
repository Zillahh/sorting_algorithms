#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - a function thst sorts an array of integers in ascending
 * order using selection sort algorithm
 *
 * @array:the array to sort from
 * @size: of the array i
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (array[min] != array[i])
		{
			tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}

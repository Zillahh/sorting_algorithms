#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - a funtion that sorts an array of integers
 * in ascending order using the bubble sort algorithm.
 *
 * @array:the array to sort
 * @size: the positive size of th array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, o;
	int check = 0;

	if (!array || size < 2 || array == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (o = 0; o < size - 1; o++)
		{
			if (array[o] > array[o + 1])
			{
				tmp = array[o];
				array[o] = array[o + 1];
				array[o + 1] = tmp;
				print_array(array, size);
				check += 1;
			}
		}
		if (check == 0)
		{
			break;
		}
	}
}

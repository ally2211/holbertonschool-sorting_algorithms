#include "sort.h"

/**
 * swap - Function to swap two integer values.
 * @xp: Pointer to the first integer.
 * @yp: Pointer to the second integer.
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - Function to sort an array using the Bubble Sort algorithm.
 * It also prints the array each time two elements are swapped.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size == 0)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

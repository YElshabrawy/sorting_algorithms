#include "sort.h"

/**
 * selection_sort - sort arr asc
 * @array: arr of int
 * @size: size of arr
 * Return: void
*/

void selection_sort(int *array, size_t size)
{
	int tmp, min;
	size_t i, j, minIdx;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		minIdx = i;
		for (j = i; j < size; j++)
			if (array[j] < min)
			{
				min = array[j];
				minIdx = j;
			}

		if (minIdx != i)
		{
			tmp = array[i];
			array[i] = array[minIdx];
			array[minIdx] = tmp;
			print_array(array, size);
		}

	}

}

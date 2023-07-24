#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int tmp, flag = 0;
	size_t i, j, small;

	for (i = 0; i < size - 1; i++)
	{
		small = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[small])
			{
				small = j;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			tmp = array[small];
			array[small] = array[i];
			array[i] = tmp;
			print_array(array, size);
			flag = 0;
		}
	}
}

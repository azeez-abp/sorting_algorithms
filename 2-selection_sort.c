#include "sort.h"
/**
 * swap - chage the postion of two numbers
 * @list: array of numbers
 * @a:postion of the first number
 * @b:postion of the second number
 */
void swap_(int *list, size_t a, size_t b)
{
	size_t temp;

	temp = list[a];
	list[a] = list[b];
	list[b] = temp;
}


/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm; find minimum element
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	 size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		swap_(array, i, min_idx);
		print_array(array, size);
	}
}

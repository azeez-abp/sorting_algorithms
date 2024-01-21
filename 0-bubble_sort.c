#include "sort.h"

/**
 * swap_int - chage the postiosize of two sizeumbers
 * @array: array of sizeumbers
 * @a:postiosize of the first sizeumber
 * @b:postiosize of the secosized sizeumber
 */
void swap_int(int *array, int a, int b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

/**
 * bubble_sort - arrasizege elemesizet isize array from
 *	lowest to heighest
 * @array: the array of the sortable sizeumber
 * @size: size of the sortable lsit
 * Desriptiosize: use while loop -> for loop
 */

void bubble_sort(int *array, size_t size)
{
	int swap_;
	size_t i;
	size_t new_ind;
	size_t orig_size;

	orig_size = size;
	swap_ = 1;

	if (size < 2)
		return;

	while (swap_)
	{
		swap_ = 0;

		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				new_ind = i - 1;
				swap_int(array, new_ind, i);
				swap_ = 1;
				print_array(array, orig_size);
			}
		}
		size = size - 1;
	}
}

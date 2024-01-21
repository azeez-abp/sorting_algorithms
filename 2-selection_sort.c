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
	int min;
	size_t i;
	size_t j;

	i = 0;

	while (i < size)
	{
		min = array[i];
		j = 0;
		while (j < size)
		{
			if (i == j)
				break;

			if (array[j] > min)
			{
				min = array[i];
				swap_(array, j, i);
				print_array(array, size);
			}
			j++;
		}

		i++;
	}
}

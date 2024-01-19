#include "sort.h"

/**
 * swap_int - chage the postion of two numbers
 * @list: array of numbers
 * @a:postion of the first number
 * @b:postion of the second number
 */
void swap_int(int *list, int a, int b)
{
	int temp;

	temp = list[a];
	list[a] = list[b];
	list[b] = temp;
}

/**
 * bubble_sort - arrange element in list from
 *	lowest to heighest
 * @list: the list of the sortable number
 * @n: size of the sortable lsit
 * Desription: use while loop -> for loop
 */

void bubble_sort(int *list, size_t n)
{
	int swap_;
	size_t i;
	size_t new_ind;
	size_t orig_len;

	orig_len = n;
	swap_ = 1;

	while (swap_)
	{
		swap_ = 0;

		for (i = 1; i < n; i++)
		{
			if (list[i - 1] > list[i])
			{
				new_ind = i - 1;
				swap_int(list, new_ind, i);
				swap_ = 1;
				print_array(list, orig_len);
			}
		}
		n = n - 1;
	}
}

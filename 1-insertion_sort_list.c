#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Dobule linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while ((node->prev) && (node->prev->n > node->n))
		{
			swap_node_(node, list);
			print_list(*list);
		}
		node = node->next;
	}
}

/**
 * swap_node_ - swapping the node the diubly linked list
 * @node: the current node to swap with its previous
 * @list: the first node the list
 */

void swap_node_(listint_t *node, listint_t **list)
{
	listint_t *back_of_cur_node;
	listint_t *cur_node;
	/*list is  alway the first node*/
	cur_node = node;
	back_of_cur_node = node->prev;
	/*infinite loop if the checking is not done*/
	if (back_of_cur_node)
		back_of_cur_node->next = cur_node->next; /*no 3*/
	if (cur_node->next)
		cur_node->next->prev = back_of_cur_node; /*no 1*/
	/*the pointers are handled in order from the cur to pre*/
	cur_node->next = back_of_cur_node;								 /*no 1*/
	cur_node->prev = back_of_cur_node->prev;						   /*no 2*/
	/*back_of_cur_node->next = cur_node->next; this step is not node*/ /*no 3*/

	back_of_cur_node->prev = cur_node; /*no 4*/
	/*putting the currect node in it position*/
	if (cur_node->prev)
		cur_node->prev->next = cur_node;
	/*return the current node to it original position*/
	else
		*list = cur_node; /*the first node is the currecnt node*/
	/*return (cur_node);*/
}

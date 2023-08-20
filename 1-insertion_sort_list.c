#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 *
 * @list: Pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp;

	if (!list || !*list || !(*list)->next)
		return;

	for (curr = (*list)->next; curr; curr = tmp)
	{
		tmp = curr->next;
		while (curr->prev && curr->prev->n > curr->n)
		{
			curr->prev->next = curr->next;
			if (curr->next)
				curr->next->prev = curr->prev;
			curr->next = curr->prev;
			curr->prev = curr->prev->prev;
			curr->next->prev = curr;
			if (curr->prev)
				curr->prev->next = curr;
			else
				*list = curr;
			print_list(*list);
		}
	}
}

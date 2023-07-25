#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: the doubly linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	int a;
	listint_t *h;

	h = *list;
	while (h != NULL)
	{
		while (h != NULL)
		{
			if (h->next)
			{
				if (h->n > h->next->n)
				{
					a = h->n;
					*(int *)&h->n = h->next->n;
					*(int *)&h->next->n = a;
					h = *list;
					print_list(*list);
					break;
				}
			}
			h = h->next;
		}
	}
}

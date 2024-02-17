#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: list to sort in ascending order
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *pre, *tmp_nxt, *tmp_prv;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = *list;

	while (curr != NULL)
	{
		pre = curr->prev;
		while (pre != NULL && (curr->n < pre->n))
		{
			if (pre->prev != NULL)
				pre->prev->next = curr;
			if (curr->next != NULL)
				curr->next->prev = pre;

			tmp_prv = pre->prev;
			tmp_nxt = curr->next;

			pre->prev = curr;
			pre->next = tmp_nxt;
			curr->prev = tmp_prv;
			curr->next = pre;

			if (curr->prev == NULL)
				*list = curr;

			print_list(*list);

			pre = curr->prev;
		}
		curr = curr->next;
	}
}

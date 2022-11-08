#include "sort.h"

/*
void swap(listint_t *list, listint_t *current, listint_t *next_node)
{

	current->next = next_node->next;
	next_node->next = current;
	if(current->prev == NULL)
	{
		current->prev = next_node;
		next_node->prev = NULL;
	}
	else
	{
		next_node->prev = current->prev;
		current->prev->next = next_node;
		current->prev = next_node;
	}	
	print_list(list);

}*/
/**
 * insertion_sort_list: implements the insertion sort algorithm on an array of integers
 * 		in a doubly linked list
 *
 * @list: pointer to list containing the array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pos, *current;
	listint_t *next_node = *list;

	if(*list == NULL || list == NULL)
		return;

	next_node = next_node->next;
	while(next_node)
	{
		current = next_node->prev;
		pos = next_node->next;

		while(current && current->n > next_node->n)
		{
			current->next = next_node->next;
			next_node->next = current;
			if(current->next != NULL)
				current->next->prev = current;
			if(current->prev == NULL)
			{
				current->prev = next_node;
				next_node->prev = NULL;
				*list = next_node;
			}
			else
			{
				next_node->prev = current->prev;
				current->prev->next = next_node;
				current->prev = next_node;
			}
			print_list(*list);
			current = next_node->prev;
		}
		next_node = pos;
	}
}

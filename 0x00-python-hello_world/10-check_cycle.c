#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *go = list;
	listint_t *stop = list;

	if (!list)
		return (0);

	while (go && stop && stop->next)
	{
		go = go->next;
		stop = stop->next->next;
		if (go == stop)
			return (1);
	}

	return (0);
}

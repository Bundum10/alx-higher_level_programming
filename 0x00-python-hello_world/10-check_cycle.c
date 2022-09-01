#include "lists.h"
<<<<<<< HEAD

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
=======
/**
 *check_cycle - checks if a linked list contains a cycle
 *@list: linked list to check
 *
 *Return: 1 if the list has a cycle, 0 if it doesn't
>>>>>>> 265476639304fd26e9686bcf3a62fb88aabfa3e8
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
<<<<<<< HEAD

=======
>>>>>>> 265476639304fd26e9686bcf3a62fb88aabfa3e8
	return (0);
}

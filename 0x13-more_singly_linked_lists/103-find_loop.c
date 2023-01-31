#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *basic, *main;

	basic = main = head;
	while (basic && main && main->next)
	{
		basic = basic->next;
		main = main->next->next;

		if (basic == main)
		{
			basic = head;
			break;
		}
	}
	if (!basic || !main || !main->next)
		return (NULL);
	while (basic != main)
	{
		basic = basic->next;
		main = main->next;
	}
	return (main);
}




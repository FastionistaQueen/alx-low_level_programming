#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to pointer to the first node of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}


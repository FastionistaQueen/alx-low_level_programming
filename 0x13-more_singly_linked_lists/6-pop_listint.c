#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n)
 * @head: pointer to pointer to the first node of the list
 *
 * Return: data (n) of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}


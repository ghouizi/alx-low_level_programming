#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in the list.
 * @head: Pointer to the address of the head of the linked list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;

    if (head == NULL || *head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head)
            (*head)->prev = NULL;
        free(temp);
        return (1);
    }

    for (; index > 0; index--)
    {
        if (temp == NULL)
            return (-1);
        temp = temp->next;
    }

    if (temp == NULL)
        return (-1);

    if (temp->prev)
        temp->prev->next = temp->next;

    if (temp->next)
        temp->next->prev = temp->prev;

    free(temp);
    return (1);
}


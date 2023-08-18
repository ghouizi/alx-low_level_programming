#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to retrieve.
 * Return: Pointer to the nth node, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *current = head;

    while (current != NULL)
    {
        if (i == index)
            return (current);
        current = current->next;
        i++;
    }
    return (NULL);
}


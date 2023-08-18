#include "lists.h"

/**
 * dlistint_len - Calcule le nombre d'éléments dans une liste dlistint_t.
 * @h: Pointeur vers le début de la liste.
 * Retour: Le nombre d'éléments dans la liste.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}


#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Imprime tous les éléments d'une liste dlistint_t.
 * @h: Pointeur vers le début de la liste.
 * Retour: Le nombre de nœuds dans la liste.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
}

#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to be added in the new node.
 * 
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int count = 0;

    if (idx == 0)
        return add_dnodeint(h, n);

    while (temp)
    {
        if (count == idx - 1)
        {
            new_node = malloc(sizeof(dlistint_t));
            if (!new_node)
                return NULL;

            new_node->n = n;
            new_node->prev = temp;
            new_node->next = temp->next;

            if (temp->next)
                temp->next->prev = new_node;

            temp->next = new_node;
            return new_node;
        }

        count++;
        temp = temp->next;
    }

    return NULL;
}

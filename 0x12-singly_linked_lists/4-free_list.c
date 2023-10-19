#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current->next;/*Save the next pointer b4 freeing the current node*/
		free(current->str);/*Free the memory allocated for the string*/
		free(current);/*Free the current node*/
		current = temp;/*Move to the next node*/
	}
}

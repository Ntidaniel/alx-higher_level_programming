#include "lists.h"

/**
 * check_cycle - this checks if a linked list has a cycle or not
 * @list: pointer to the head of the linked list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
    listint_t *slow, *fast;

    if (list == NULL || list->next == NULL)
        return (0);

    slow = list;
    fast = list->next;

    while (fast != NULL && fast->next != NULL)
    {
        if (slow == fast)
            return (1); /* Cycle found */

        slow = slow->next;
        fast = fast->next->next;
    }

    return (0); /* No cycle found */
}


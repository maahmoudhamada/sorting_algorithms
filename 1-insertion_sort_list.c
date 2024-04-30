#include "sort.h"

/**
* insertion_sort_list - Function to sort list in insertion algo
*
* @list: List to sort
*
* Return: Void
*/

void insertion_sort_list(listint_t **list)
{
listint_t *cur, *nnode;

if (list == NULL || (*list) == NULL || !(*list)->next)
return;

for (cur = (*list)->next; cur; cur = nnode)
{
nnode = cur->next;
while (cur->prev && cur->prev->n > cur->n)
{
if (cur->next)
cur->next->prev = cur->prev;

cur->prev->next = cur->next;
cur->next = cur->prev;
cur->prev = cur->prev->prev;
cur->next->prev = cur;

if (cur->prev)
cur->prev->next = cur;

else
*list = cur;
print_list(*list);
}
}
}


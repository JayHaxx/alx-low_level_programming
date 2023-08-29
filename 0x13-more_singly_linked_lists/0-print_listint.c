#include <stdio.h>
#include "lists.h"

/**
* print_listint- prints elements of the listint_t list
* >h - is the pointer to the header of the list
*
* Return:nnumber of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}

return (num);
}

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *pointer = *lst;

    if(pointer == NULL)
    {
        *lst = new;
        return;
    }

    while(pointer->next != NULL)
        pointer = pointer->next;
    pointer->next = new;
}







// lst: The address of a pointer to the first link of a list.
// new: The address of a pointer to the node to be
// added to the list.
// Return value None
// External functs. None
// Description Adds the node ’new’ at the end of the list
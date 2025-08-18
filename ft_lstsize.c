#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i = 0;
    while (lst != NULL)
    {
        lst = lst->next;
        i++;
    }
    return i;
}





// lst: The beginning of the list.
// Return value The length of the list
// External functs. None
// Description Counts the number of nodes in a list.
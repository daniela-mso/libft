#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return NULL;
    else
    {
        while (lst->next != NULL)
        {
            lst = lst->next;
        }
    }
    return lst;
}




// lst: The beginning of the list.
// Return value Last node of the list
// External functs. None
// Description Returns the last node of the list.
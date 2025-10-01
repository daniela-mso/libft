#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !(*f))
        return;
    while (lst != NULL)
    {
        (*f)(lst->content);
        lst = lst->next;
    }
}


// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.
// Return value None
// External functs. None
// Description Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.
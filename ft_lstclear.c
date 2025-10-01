#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;

	temp = *lst;
    if (!lst || !(*del))
        return;
    while (*lst != NULL)
    {
        (*del)((*lst)->content);
        temp = (*lst)->next;
        free(*lst);
        *lst = temp;
    }
}



// lst: The address of a pointer to a node.
// del: The address of the function used to delete
// the content of the node.
// Return value None
// External functs. free
// Description Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL.
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    if (!lst || !(*f) || !(*del))
        return NULL;
    
    t_list	*new_list = NULL;
    t_list	*first = NULL;
     
    while(lst != NULL)
    {
        if(first == NULL)
            first = ft_lstnew((*f)(lst->content));
        else 
            new_list->next = ft_lstnew((*f)(lst->content));
    
    }
    return new_list;
}



// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.
// del: The address of the function used to delete
// the content of a node if needed.
// Return value The new list.
// NULL if the allocation fails.
// External functs. malloc, free
// Description Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.
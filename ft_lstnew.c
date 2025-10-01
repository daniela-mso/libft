#include "libft.h"
#include <stdlib.h>


t_list	*ft_lstnew(void *content)
{
    t_list	*node = malloc(sizeof(t_list));
    if(!node)
        return NULL;

    node->content = content;
    node->next = NULL;
    return node;
}

// Allocates (with malloc(3)) and returns a new node.
// The member variable ’content’ is initialized with
// the value of the parameter ’content’. The variable
// ’next’ is initialized to NULL.
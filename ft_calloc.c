#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(int n, int size)
{
    void *res= malloc(n * size);
    if (res == NULL)
        return NULL;
    ft_memset(res, 0, size * n);
    return res;
}

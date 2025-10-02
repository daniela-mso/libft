#include <stdio.h>
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    if (c == '\0')
        return ((char *) (s + ft_strlen(s)));
    return ft_memchr(s, c, ft_strlen(s));
}


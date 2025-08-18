#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if(!s)
        return NULL;
    size_t i = 0;
    char *subs = malloc(sizeof(char) * len + 1);
    if(!subs)
        return NULL;
    if(start >=(unsigned int)ft_strlen(s))
        start = (unsigned int)ft_strlen(s);
    while(i < len)
    {
        subs[i] = s[start];
        i++;
        start++;
    }
    subs[i] = '\0';
    return subs;
}
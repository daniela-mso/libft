#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    unsigned int start = 0;
    size_t len = 0;
    unsigned int end = ft_strlen(s1) -1;
    if (s1[0] == '\0')
        return ft_strdup("");
    while(s1[start])
    {
        if(!ft_strchr(set, s1[start]))
            break;
        start++;
    }
    while(end >= start)
    {
        if(!ft_strchr(set, s1[end]))
            break;
        end--;
    }
    len = end - start + 1;

    return ft_substr(s1, start, len);
}